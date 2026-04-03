#4th
import cv2
import mediapipe as mp
import numpy as np
import os
from tensorflow.keras.models import load_model
from sklearn.preprocessing import LabelEncoder
from scipy.interpolate import interp1d
import pickle

MODEL_PATH = r"C:\Pinacle\models\face68_lstm_model.keras"
LABEL_ENCODER_PATH = r"C:\Pinacle\models\label_encoder.pkl"
VIDEO_PATH = r"C:\Testing\adhomukham2.mp4"  
MAX_FRAMES = 60
FACE68_IDX = sorted(set(list(range(0,17)) + list(range(70,96)) +
                        list(range(97,137)) + list(range(145,175)) +
                        list(range(374,404)) + list(range(78,88)) +
                        list(range(308,318))))[:68]


#Load model & label encoder

print("📦 Loading model and label encoder...")
model = load_model(MODEL_PATH)
with open(LABEL_ENCODER_PATH, 'rb') as f:
    label_encoder: LabelEncoder = pickle.load(f)

print("✅ Model and encoder loaded successfully!\n")


# Helper functions

def normalize(seq):
    seq = np.array(seq)
    seq = (seq - np.min(seq)) / (np.ptp(seq) + 1e-6)
    return seq

def resample(seq, target_frames=MAX_FRAMES):
    old_idx = np.linspace(0, 1, len(seq))
    new_idx = np.linspace(0, 1, target_frames)
    f = interp1d(old_idx, seq, axis=0, fill_value="extrapolate")
    return f(new_idx)


# Extract 68 facial keypoints from video

def extract_face68_keypoints(video_path):
    mp_face_mesh = mp.solutions.face_mesh
    face_mesh = mp_face_mesh.FaceMesh(
        static_image_mode=False,
        max_num_faces=1,
        refine_landmarks=True,
        min_detection_confidence=0.5,
        min_tracking_confidence=0.5
    )

    cap = cv2.VideoCapture(video_path)
    all_frames = []
    frame_count = 0

    while True:
        ret, frame = cap.read()
        if not ret:
            break
        frame_count += 1
        rgb = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)
        results = face_mesh.process(rgb)

        if results.multi_face_landmarks:
            lm = results.multi_face_landmarks[0].landmark
            pts = []
            for i in FACE68_IDX:
                p = lm[i]
                pts.extend([p.x, p.y, p.z])
        else:
            pts = [0.0] * (68 * 3)

        all_frames.append(pts)

    cap.release()
    face_mesh.close()

    if len(all_frames) == 0:
        raise ValueError("❌ No frames detected in video!")

    arr = np.array(all_frames, dtype=np.float32)
    arr = normalize(arr)
    arr = resample(arr, MAX_FRAMES)
    return np.expand_dims(arr, axis=0)  

#  Predict Shirobheda Class

def predict_shirobheda(video_path):
    print(f"🎥 Processing video: {video_path}")
    X = extract_face68_keypoints(video_path)

    print("🤖 Running model inference...")
    pred = model.predict(X)
    predicted_idx = np.argmax(pred)
    predicted_class = label_encoder.classes_[predicted_idx]
    confidence = np.max(pred) * 100

    print("\n🎯 Predicted Shirobheda Class:", predicted_class)
    print(f"📊 Confidence: {confidence:.2f}%")
    return predicted_class, confidence


# Run prediction

if __name__ == "__main__":
    predict_shirobheda(VIDEO_PATH)

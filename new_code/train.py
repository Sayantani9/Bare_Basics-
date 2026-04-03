#3rd
import os, numpy as np, matplotlib.pyplot as plt
from sklearn.preprocessing import LabelEncoder
from sklearn.metrics import classification_report, confusion_matrix
from tensorflow.keras.models import Sequential
from tensorflow.keras.layers import LSTM, Dense, Dropout, Masking, BatchNormalization
from tensorflow.keras.callbacks import EarlyStopping
from tensorflow.keras.optimizers import Adam
from tensorflow.keras.utils import to_categorical
from tqdm import tqdm

# -----------------------------
# Paths
# -----------------------------
DATA_ROOT = r"C:\Pinacle\face68_dataset"
TRAIN_DIR = os.path.join(DATA_ROOT,"train")
TEST_DIR  = os.path.join(DATA_ROOT,"test")
MAX_FRAMES = 60
BATCH = 4
EPOCHS = 150
LR = 1e-4

# -----------------------------
# Load dataset
# -----------------------------
def load_split(folder):
    X, y = [], []
    for cls in sorted(os.listdir(folder)):
        path = os.path.join(folder,cls)
        if not os.path.isdir(path): continue
        for f in os.listdir(path):
            if f.endswith('.npy'):
                arr = np.load(os.path.join(path,f)).astype(np.float32)
                X.append(arr)
                y.append(cls)
    return np.array(X), np.array(y)

print("Loading data...")
X_train, y_train = load_split(TRAIN_DIR)
X_test,  y_test  = load_split(TEST_DIR)
print("Shapes:", X_train.shape, X_test.shape)

# -----------------------------
# Encode labels
# -----------------------------
le = LabelEncoder()
y_train_enc = le.fit_transform(y_train)
y_test_enc  = le.transform(y_test)
y_train_cat = to_categorical(y_train_enc)
y_test_cat  = to_categorical(y_test_enc)
n_classes   = len(le.classes_)
print("Classes:", le.classes_)

# -----------------------------
# Build model
# -----------------------------
input_dim = X_train.shape[2]
model = Sequential([
    Masking(mask_value=0., input_shape=(MAX_FRAMES, input_dim)),
    LSTM(256, return_sequences=True),
    BatchNormalization(),
    Dropout(0.25),
    LSTM(128, return_sequences=False),
    BatchNormalization(),
    Dropout(0.35),
    Dense(128, activation='relu'),
    Dropout(0.3),
    Dense(n_classes, activation='softmax')
])
opt = Adam(learning_rate=LR)
model.compile(optimizer=opt, loss='categorical_crossentropy', metrics=['accuracy'])
model.summary()

# -----------------------------
# Train
# -----------------------------
early = EarlyStopping(monitor='val_loss', patience=12, restore_best_weights=True)
history = model.fit(
    X_train, y_train_cat,
    validation_data=(X_test, y_test_cat),
    epochs=EPOCHS,
    batch_size=BATCH,
    #callbacks=[early],
    verbose=1
)

# -----------------------------
# Evaluate
# -----------------------------
y_pred = np.argmax(model.predict(X_test), axis=1)
print("\nClassification Report:")
print(classification_report(y_test_enc, y_pred, target_names=le.classes_))

cm = confusion_matrix(y_test_enc, y_pred)
plt.imshow(cm,cmap='Blues')
plt.title("Confusion Matrix")
plt.xlabel("Predicted"); plt.ylabel("True")
plt.show()

plt.figure(figsize=(10,4))
plt.subplot(1,2,1)
plt.plot(history.history['accuracy']); plt.plot(history.history['val_accuracy'])
plt.title("Accuracy"); plt.legend(['train','val'])
plt.subplot(1,2,2)
plt.plot(history.history['loss']); plt.plot(history.history['val_loss'])
plt.title("Loss"); plt.legend(['train','val'])
plt.show()

model.save(r"C:\Pinacle\models\face68_lstm_model.keras")
print("\n✅ Saved model at C:\\Pinacle\\models\\face68_lstm_model.keras")

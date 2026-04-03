#2nd
import os
import numpy as np
import shutil
from tqdm import tqdm
from sklearn.model_selection import train_test_split
from scipy.interpolate import interp1d

# ------------------------------------------------------------
# 📂 Paths
# ------------------------------------------------------------
input_folder = r"C:\Pinacle\face68_keypoints"
output_folder = r"C:\Pinacle\face68_dataset"

train_folder = os.path.join(output_folder, "train")
test_folder = os.path.join(output_folder, "test")

os.makedirs(train_folder, exist_ok=True)
os.makedirs(test_folder, exist_ok=True)

# ------------------------------------------------------------
# ⚙️ Helper Functions
# ------------------------------------------------------------
def normalize_keypoints(seq):
    """
    Normalize x, y, z coordinates of facial keypoints (1404 features)
    to range [0, 1].
    """
    seq = np.array(seq)
    seq = (seq - np.min(seq)) / (np.ptp(seq) + 1e-6)
    return seq

def resample_sequence(seq, target_frames=60):
    """
    Resample a sequence of frames to a fixed number of frames using interpolation.
    """
    old_idx = np.linspace(0, 1, len(seq))
    new_idx = np.linspace(0, 1, target_frames)
    f = interp1d(old_idx, seq, axis=0, fill_value="extrapolate")
    return f(new_idx)

# ------------------------------------------------------------
# 🧠 Build Dataset
# ------------------------------------------------------------
files = [f for f in os.listdir(input_folder) if f.endswith(".npy")]

# Function to extract class name (e.g. sama1.npy → sama)
def get_class_name(filename):
    name = filename.replace(".npy", "")
    for i, c in enumerate(name):
        if c.isdigit():
            return name[:i]
    return name

class_dict = {}
for f in files:
    cls = get_class_name(f)
    class_dict.setdefault(cls, []).append(f)

print(f"📂 Found {len(class_dict)} Shirobheda classes:")
for c in class_dict:
    print("   -", c, ":", len(class_dict[c]), "videos")

# ------------------------------------------------------------
# ✨ Normalize, Resample, Split
# ------------------------------------------------------------
for cls, cls_files in class_dict.items():
    train_files, test_files = train_test_split(cls_files, test_size=0.2, random_state=42)

    os.makedirs(os.path.join(train_folder, cls), exist_ok=True)
    os.makedirs(os.path.join(test_folder, cls), exist_ok=True)

    for f in tqdm(train_files, desc=f"Processing train/{cls}"):
        arr = np.load(os.path.join(input_folder, f))
        arr = normalize_keypoints(arr)
        arr = resample_sequence(arr, target_frames=60)
        np.save(os.path.join(train_folder, cls, f), arr)

    for f in tqdm(test_files, desc=f"Processing test/{cls}"):
        arr = np.load(os.path.join(input_folder, f))
        arr = normalize_keypoints(arr)
        arr = resample_sequence(arr, target_frames=60)
        np.save(os.path.join(test_folder, cls, f), arr)

print("\n✅ Dataset built successfully!")
print(f"Train and test sets saved in: {output_folder}")

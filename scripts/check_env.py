"""Vérifie que toutes les dépendances du projet sont importables."""
import sys

PACKAGES = ["cv2", "mediapipe", "numpy", "serial", "yaml"]

print(f"Python : {sys.version.split()[0]}")
all_ok = True
for name in PACKAGES:
    try:
        module = __import__(name)
        version = getattr(module, "__version__", "version inconnue")
        print(f"[OK]   {name:<10} {version}")
    except ImportError as error:
        print(f"[FAIL] {name:<10} {error}")
        all_ok = False

print("\nEnvironnement VALIDE" if all_ok else "\nEnvironnement INCOMPLET")

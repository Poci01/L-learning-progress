import string
import random

def pw_maker(long=10, angka=True, simbol=True):
    karakter = string.ascii_letters

    if angka:
        karakter += string.digits

    if simbol:
        karakter += string.punctuation


    pw = "".join(random.choices(karakter, k=long))

    return pw

print("Default (Huruf + Angka): ", pw_maker())

print("Hanya Huruf: ", pw_maker(angka=False))

print("Lengkap (Huruf + Angka + Simbol): ", pw_maker(simbol=True))

print("Custom 15 Karakter: ", pw_maker(long=15, simbol=True))
import string
import random

def pw_maker(long, angka, simbol):
    karakter = string.ascii_letters

    if angka:
        karakter += string.digits

    if simbol:
        karakter += string.punctuation


    pw = "".join(random.choices(karakter, k=long))

    return pw

def main ():
    print("\n==============================\n")
    print("\n--- Password Generator CLI ---\n")
    print("\n==============================\n")
    long = int(input("Masukkan panjang password yang diinginkan: "))
    if ( long < 12):
        long = 12
        print("Password tidak boleh kurang dari 12 digit, system otomatis membuat password dengan 12 digit.\n")
    elif (long > 32):
        long = 32
        print("Password tidak boleh lebih dari 32 digit, system otomatis membuat password dengan 32 digit.\n")
    else:
        print(f"Anda memilih {long} digit.")
    while True:
        angka = input("\nApakah anda ingin menggunakan angka: (y/n)").lower()

        if angka in ['y', 'n']:
            pakai_angka = (angka == 'y')
            break
        else:
            print("Harap input sesuai arahan!")

    while True:
        simbol = input("\nApakah anda ingin menggunakan simbol: (y/n)").lower()

        if simbol in ['y', 'n']:
            pakai_simbol = (simbol == 'y')
            break
        else:
            print("Harap input sesuai arahan!")


    pw_lu = pw_maker(long, pakai_angka, pakai_simbol)
    print(f"\nPassword anda: {pw_lu}")


if __name__ == "__main__":
    main()
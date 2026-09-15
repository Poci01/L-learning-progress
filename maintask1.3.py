def kalku (angka1, angka2, op):
    if op == '+':
        return angka1 + angka2
    elif op == '-':
        return angka1 - angka2
    elif op == '*':
        return angka1 * angka2
    elif op == '/':
        if angka2 == 0:
            return "Error sat jangan masukkin angka 0"
        return angka1 / angka2
    else: 
        return "Intinya error lu ngapain masukkin op yang gajelas bgst kan disuruh nya (+, -, *, /)"


def kon_grade (nilai) :
    if nilai == 100:
        return "Nilai anda masuk kedalam kategori A+"
    elif nilai >= 90:
        return "Nilai anda masuk kedalam kategori A"
    elif nilai >= 80:
        return "Nilai anda masuk kedalam kategori B"
    elif nilai >= 70:
        return "Nilai anda masuk kedalam kategori C"
    elif nilai >= 60:
        return "Nilai anda masuk kedalam kategori D"
    else:
        return "Nilai anda masuk kedalam kategori E"


def main ():
    while True:
        print("\n==============================\n")
        print("1. Konversi nilai\n")
        print("2. Calculator\n")
        print("3. Keluar\n")
        print("\n==============================\n")

        pilihan = input("Pilih 1-3: ")

        if (pilihan == '1'):
            try:
                nilai = float(input("\nMasukkan Nilai Anda: "))
                if 0 <= nilai <= 100:
                    grade = kon_grade(nilai)
                    print(f"Nilai {nilai} mendapatkan kategori : {grade}")
                else:
                    print("Harap input dengan benar, masukkan angka 1 sampai 100")
            except ValueError :
                print("Error : Input harus berupa angka!\n")

        elif pilihan == '2':
            try:
                angka1 = float(input("Masukkan angka pertama: "))
                op = input("Masukkan operator (+, -, *, /): \n")
                angka2 = float(input("Masukkan angka kedua: "))

                hasil = kalku(angka1, angka2, op)
                print(f"Hasil dari {angka1} {op} {angka2} = {hasil}")
            except ValueError:
                print("Error: Angka tidak valid!\n")

        elif pilihan == '3':
            print("Terima kasih! Program Selesai.")
            break
        else:
            print("Masukkin angka yang bener bangsatt")


if __name__ == "__main__":
    main()
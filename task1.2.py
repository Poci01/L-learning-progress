print("\n==============================\n")
print("----   Calcu by L   ----")
print("\n==============================\n")
angka1 = int(input("Masukkan angka pertama anda: "))
op = str(input("Masukkan operasi yang ingin anda masukkan: "))
angka2 = int(input("Masukkan angka kedua anda: "))

match op:
    case "+":
        hasil = angka1 + angka2
        print(f"{angka1} + {angka2} = {hasil}")
    case "-":
        hasil = angka1 - angka2
        print(f"{angka1} - {angka2} = {hasil}")
    case "*":
        hasil = angka1 * angka2
        print(f"{angka1} * {angka2} = {hasil}")
    case "/":
        if angka2 != 0:
            hasil = angka1 / angka2
            print(f"{angka1} / {angka2} = {hasil}")
        else:
            print("Error")
    case _:
        print("Operator tidak valid")
def pw_count(pw):
    upper = 0
    long_pw = len(pw)

    for char in pw:
        if char.isupper():
            upper = upper + 1
    
    print(f"Panjang password: {long_pw}")
    print(f"Jumlah kapital dalam password: {upper}")



pw = input("Masukkan password anda disini: \n")

pw_count(pw)
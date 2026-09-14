



print("\n==============================\n")
print("-----  Grade Conversion  -----")
print("\n==============================\n")
nilai = int(input("Masukkan nilai anda: "))

if nilai == 100:
    print ("Nilai anda masuk kedalam kategori A+\n")
    print ("Pertahankan terus nilainya yaa...")
elif nilai >= 90:
    print ("Nilai anda masuk kedalam kategori A\n")
    print ("Nilainya sudah bagus namun tetap tingkatkan belajarnya...")
elif nilai >= 80:
    print  ("Nilai anda masuk kedalam kategori B\n")
    print ("Nilai sudah masuk kategori aman harap untuk lebih meningkatkan belajarnya...")
elif nilai >= 70:
    print ("Nilai anda masuk kedalam kategori C\n")
    print ("Nilai masih belum aman harap kurangin aktivitas diluar pelajaran dan lebih sering membuka buku pelajaran...")
elif nilai >= 60:
    print ("Nilai anda masuk kedalam kategori D\n")
    print ("Lau belajar apasi ajg....")
else: 
    print ("Nilai anda masuk kedalam kategori E\n")
    print ("Tolol bat anjg belajar lagi dah mending sono...")
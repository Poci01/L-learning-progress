#include <iostream>
using namespace std;

int main() {
    int totalBelanja = 0;
    int pilihan, barangDibeli;
    int daftarharga[5] = {15000, 20000, 5000, 7000, 5000};
    string daftarbarang[5] = {"Kebab", "Pizza", "Es Teh", "Es Jeruk", "Es Cream"};
    string hargaBarang;
    char konfirmasi, konfirmasi2;


    do {
        cout << "================================\n";
        cout << "Selamat datang di Toko Kami!\n";
        cout << "================================\n";
        cout << "Daftar Harga Barang\n";
        cout << "================================\n";
            for (int i = 0; i < 5; i++) {
                cout << i + 1 << ". " << daftarbarang[i] << " - Rp " << daftarharga[i] << "\n";
            }
        cout << "================================\n";
                cout << "Masukkan nomor barang yang ingin dibeli (1-5): ";
                cin >> pilihan;

            while (cin.fail() || pilihan < 1 || pilihan > 5) {
                cout << "Pilihan tidak valid.\n";
                cin.clear();
                cin.ignore(10000, '\n');
                cout << "Masukkan nomor barang yang ingin dibeli (1-5): ";
                cin >> pilihan;
            }
        
        barangDibeli.push_back(daftarbarang[pilihan - 1]);
        hargaBarang.push_back(daftarharga[pilihan - 1]);

        cout << "================================\n";
        cout << "Anda memilih: " << daftarbarang[pilihan - 1] << "\n";
        cout << "Harga: Rp " << daftarharga[pilihan - 1] << "\n";
        cout << "================================\n";
        cout << "Apakah ada lagi yang ingin dibeli? (y/n): ";
        cin >> konfirmasi;

            while (cin.fail() || (konfirmasi != 'y' && konfirmasi != 'Y' && konfirmasi != 'n' && konfirmasi != 'N')) {
                cout << "Konfirmasi tidak valid. Silakan coba lagi.\n";
                cin.clear();
                cin.ignore(10000, '\n');
                cin >> konfirmasi;
            } while (konfirmasi == 'y' || konfirmasi == 'Y');
            




// bagian sini ke bawah masih rada pusing, nanti di cek lagi
// untuk bagian atas hold dulu (udh mayan ok) - blom coba di run
// bagian ringkasan belanja sama konfirmasi pembayaran masih bingung (antara ada yang harus di gabung atau di pisah aja)
        cout << "================================\n";
        cout << "Ringkasan Belanja Anda\n";
        cout << "================================\n";
            for (size_t i = 0; i < hargaDibeli.size(); i++) {
            cout << "- " << barangDibeli[i] << " : Rp " << hargaDibeli[i] << "\n";
            totalBelanja += hargaDibeli[i]; // Hitung total akumulatif
            }
        cout << "Total Belanja : Rp." << totalBelanja << ",00\n";
        cout << "================================\n";
        cout << "Lanjut untuk pembayaran? (y/n): \n";
        cin >> konfirmasi2;

            while (cin.fail() || (konfirmasi2 != 'y' && konfirmasi2 != 'Y' && konfirmasi2 != 'n' && konfirmasi2 != 'N')) {
                cout << "Konfirmasi tidak valid. Silakan coba lagi.\n";
                cin.clear();
                cin.ignore(10000, '\n');
                cin >> konfirmasi2;
            }

            if (konfirmasi2 == 'y' || konfirmasi2 == 'Y') {
                cout << "Pembayaran sebesar Rp " << daftarharga[pilihan - 1] << " berhasil.\n";
            } else if (konfirmasi2 == 'n' || konfirmasi2 == 'N') {
                cout << "Transaksi dibatalkan.\n";
            } else {
                cout << "Konfirmasi tidak valid. Transaksi dibatalkan.\n";
            }

        cout << "Terimakasih telah berbelanja!\n";
        cout << "================================\n";
        cout << "Ingin membeli lagi? (y/n): ";
        cin >> konfirmasi;

            while (cin.fail() || (konfirmasi != 'y' && konfirmasi != 'Y' && konfirmasi != 'n' && konfirmasi != 'N')) {
                cout << "Konfirmasi tidak valid. Silakan coba lagi.\n";
                cin.clear();
                cin.ignore(10000, '\n');
                cin >> konfirmasi;
            }
    } while (konfirmasi == 'y' || konfirmasi == 'Y');

    return 0;

}
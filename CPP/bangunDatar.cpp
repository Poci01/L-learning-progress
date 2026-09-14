#include <iostream>
using namespace std;

int main() {

    int pilihan, alas, tinggi, sisi, panjang, lebar, jariJari, diagonal1, diagonal2;


    cout <<"============================\n";
    cout <<"Pilih bangun datar: \n";
    cout <<"1. Segitiga\n";
    cout <<"2. Persegi\n";
    cout <<"3. Persegi Panjang\n";
    cout <<"4. Lingkaran\n";
    cout <<"5. Trapesium\n";
    cout <<"6. Jajar Genjang\n";
    cout <<"7. Belah Ketupat\n";
    cout <<"8. Layang-Layang\n";
    cin >> pilihan;
    cout <<"============================\n";

    if (cin.fail()) {
        
        cout << "Pilihan bangun datar yang anda masukkan tidak valid\n" << endl;
    } else if (pilihan < 1 || pilihan > 8) {
        cout << "Pilihan bangun datar yang anda masukkan tidak valid\n" << endl;
    } else {
        switch (pilihan) {
            case 1:
            cout << "Masukkan alas segitiga: ";
            cin >> alas;
            cout << "Masukkan tinggi segitiga: ";
            cin >> tinggi;
            cout << "Luas segitiga: " << (alas * tinggi) / 2 << endl;
            break;
            case 2:
            cout << "Masukkan sisi persegi: ";
            cin >> sisi;
            cout << "Luas persegi: " << sisi * sisi << endl;
            break;
            case 3:
            cout << "Masukkan panjang persegi panjang: ";
            cin >> panjang;
            cout << "Masukkan lebar persegi panjang: ";
            cin >> lebar;
            cout << "Luas persegi panjang: " << panjang * lebar << endl;
            break;
            case 4:
            cout << "Masukkan jari-jari lingkaran: ";
            cin >> jariJari;
            cout << "Luas lingkaran: " << 3.14 * jariJari * jariJari << endl;
            break;
            case 5:
            cout << "Masukkan alas trapesium: ";
            cin >> alas;
            cout << "Masukkan tinggi trapesium: ";
            cin >> tinggi;
            cout << "Luas trapesium: " << ((alas + tinggi) * tinggi) / 2 << endl;
            break;
            case 6:
            cout << "Masukkan alas jajar genjang: ";
            cin >> alas;
            cout << "Masukkan tinggi jajar genjang: ";
            cin >> tinggi;
            cout << "Luas jajar genjang: " << alas * tinggi << endl;
            break;
            case 7:
            cout << "Masukkan diagonal 1 belah ketupat: ";
            cin >> diagonal1;
            cout << "Masukkan diagonal 2 belah ketupat: ";
            cin >> diagonal2;
            cout << "Luas belah ketupat: " << (diagonal1 * diagonal2) / 2 << endl;
            break;
            case 8:
            cout << "Masukkan diagonal 1 layang-layang: ";
            cin >> diagonal1;
            cout << "Masukkan diagonal 2 layang-layang: ";
            cin >> diagonal2;
            cout << "Luas layang-layang: " << (diagonal1 * diagonal2) / 2 << endl;
            break;
        }
    }
}
#include <iostream>
using namespace std;

int main() {

    int angka;

    cout << "Masukkan angka: ";
    cin >> angka;

    if (cin.fail()) {
        cout << "Input yang dimasukkan tidak valid." << endl;
        return 1; // Mengembalikan kode kesalahan
    }
     if (angka < 0) {
        cout << "Angka yang dimasukkan adalah negatif." << endl;
    } else if (angka % 2 == 0) {
        cout << "Angka yang dimasukkan adalah genap." << endl;
    } else {
        cout << "Angka yang dimasukkan adalah ganjil." << endl;
    }
    return 0;
}
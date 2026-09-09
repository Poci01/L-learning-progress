#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0)); // Seed untuk random number generator
    int angkaTebakan = rand() % 100 + 1; // Angka acak antara 1 dan 100
    int tebakan = 0;
    int percobaan = 0;

    cout << "Selamat datang di permainan Tebak Angka!\n";
    cout << "Kami telah memilih sebuah angka antara 1 sampai 100. Coba tebak angka tersebut.\n";
   
    while (tebakan != angkaTebakan) {
        cout << "Masukkan tebakan Anda: ";
        cin >> tebakan;
        percobaan++;

        if (cin.fail()) {
            cout << "Input yang dimasukkan tidak valid. Silakan masukkan angka.\n";
            cin.clear(); // reset fail state
            cin.ignore(1000, '\n'); // Buang input yang salah
            continue;
        }

        if (tebakan < 1 || tebakan > 100) {
            cout << "Tebakan harus antara 1 dan 100. Silakan coba lagi.\n";
            continue;
        }

        if (tebakan < angkaTebakan) {
            cout << "Terlalu rendah! Coba lagi.\n";
        } else if (tebakan > angkaTebakan) {
            cout << "Terlalu tinggi! Coba lagi.\n";
        } else {
            cout << "Selamat! Anda menebak angka yang benar yaitu " << angkaTebakan << " dalam " << percobaan << " percobaan.\n";
        }
    }
}
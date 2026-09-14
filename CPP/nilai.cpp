#include <iostream>
using namespace std;

int main() {

    int nilai;

    cout <<"============================\n";
    cout <<"Masukkan nilai ujian anda: \n";
    cin >> nilai;
    cout <<"============================\n";

    if (cin.fail()) {
        cout <<"Input yang anda masukkan tidak valid\n" << endl;
    }
    else {
    if (nilai < 0 || nilai > 100) {
        cout <<"Input yang anda masukkan tidak valid\n" << endl;
    }
    else if (nilai == 100) {
        cout <<"Selamat anda mendapatkan nilai A+\n";
    } else if (nilai >= 85) {
        cout <<"Selamat anda mendapatkan nilai A\n";
    } else if (nilai >= 70) {
        cout <<"Nilai anda B, terus tingkatkan belajarnya\n";
    } else if (nilai >= 60) {
        cout <<"Nilai anda C, harus lebih giat lagi belajarnya\n";
    } else if (nilai >= 50) {
        cout <<"Nilai anda D, lau belajar gak sih mpruy?\n";
    } else {
        cout <<"Nilai anda E, itu otak apa mangga?\n";
    }
}
    return 0;
}
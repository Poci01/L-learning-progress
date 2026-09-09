#include <iostream>
using namespace std;

int main() {
    
    int pilihan;
    float suhu, kelvin, fahrenheit, reamur, celcius;

    cout <<"============================\n";
    cout <<"Pilih suhu: \n";
    cout <<"1. Celcius\n";
    cout <<"2. Kelvin\n";
    cout <<"3. Fahrenheit\n";
    cout <<"4. Reamur\n";
    cin >> pilihan;
    cout <<"============================\n";

    if (cin.fail()) {

        cout << "Suhu yang anda masukkan tidak valid\n" << endl;
    } else if (pilihan < 1 || pilihan > 4) {
        cout << "Pilihan suhu yang anda masukkan tidak valid\n" << endl;
    } else {
        cout << "Masukkan nilai suhu: ";
        cin >> suhu;

        if (cin.fail()) {
            cout << "Suhu yang anda masukkan tidak valid\n" << endl;
        } else if (pilihan == 1) {
        
        kelvin = suhu + 273.15;
        fahrenheit = (suhu * 9/5) + 32;
        reamur = suhu * 4/5;

        cout << "Hasil konversi suhu dari Celcius ke:\n";
        cout << "Kelvin: " << kelvin << " K\n";
        cout << "Fahrenheit: " << fahrenheit << " °F\n";
        cout << "Reamur: " << reamur << " °Re\n";
        } else if (pilihan == 2) {
        
        celcius = suhu - 273.15;
        fahrenheit = (suhu - 273.15) * 9/5 + 32;
        reamur = (suhu - 273.15) * 4/5;

        cout << "Hasil konversi suhu dari Kelvin ke:\n";
        cout << "Celcius: " << celcius << " °C\n";
        cout << "Fahrenheit: " << fahrenheit << " °F\n";
        cout << "Reamur: " << reamur << " °Re\n";
        } else if (pilihan == 3) {
        
        celcius = (suhu - 32) * 5/9;
        kelvin = (suhu - 32) * 5/9 + 273.15;
        reamur = (suhu - 32) * 4/9;

        cout << "Hasil konversi suhu dari Fahrenheit ke:\n";
        cout << "Celcius: " << celcius << " °C\n";
        cout << "Kelvin: " << kelvin << " K\n";
        cout << "Reamur: " << reamur << " °Re\n";
        } else {
        
        celcius = suhu * 5/4;
        kelvin = suhu * 5/4 + 273.15;
        fahrenheit = suhu * 9/4 + 32;

        cout << "Hasil konversi suhu dari Reamur ke:\n";
        cout << "Celcius: " << celcius << " °C\n";
        cout << "Kelvin: " << kelvin << " K\n";
        cout << "Fahrenheit: " << fahrenheit << " °F\n";
        }
    }


    return 0;
}
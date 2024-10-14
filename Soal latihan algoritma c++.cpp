#include <iostream>
#include <cmath> // Untuk fungsi sqrt

using namespace std;

int main() {
    int pilihan;
    float panjang, lebar;

    do {
        cout << "MENU EMPAT PERSEGI PANJANG" << endl;
        cout << "1. Hitung Luas" << endl;
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 3) {
            cout << "Masukkan panjang: ";
            cin >> panjang;
            cout << "Masukkan lebar: ";
            cin >> lebar;
        }

        switch (pilihan) {
            case 1: {
                float luas = panjang * lebar;
                cout << "Luas Persegi Panjang: " << luas << endl;
                break;
            }
            
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
                break;
        }

        cout << endl;

    } while (pilihan != 4);

    return 0;
}

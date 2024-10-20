#include <iostream>
using namespace std;

int main() {
    // Variabel untuk panjang dan lebar
    double panjang, lebar, keliling;

    // Input dari pengguna
    cout << "Masukkan panjang persegi panjang (cm): ";
    cin >> panjang;
    cout << "Masukkan lebar persegi panjang (cm): ";
    cin >> lebar;

    // Menghitung keliling
    keliling = 2 * (panjang + lebar);

    // Menampilkan hasil
    cout << "Keliling persegi panjang adalah: " << keliling << " cm" << endl;

    return 0;
}


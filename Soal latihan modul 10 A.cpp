#include <iostream>
using namespace std;

int main() {
    cout << "Bilangan Genap sampai 35: ";
    for (int i = 1; i <= 35; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }

    cout << "\nBilangan Ganjil sampai 35: ";
    for (int i = 1; i <= 35; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }

    return 0;
}
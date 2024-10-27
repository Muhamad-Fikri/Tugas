#include <iostream>
    using namespace std;
    
    int main() {
        int i = 1;
    
        cout << "Bilangan Genap sampai 35: ";
        while (i <= 35) {
            if (i % 2 == 0) {
                cout << i << " ";
            }
            i++;
        }
    
        i = 1; // Reset nilai i untuk bilangan ganjil
        cout << "\nBilangan Ganjil sampai 35: ";
        while (i <= 35) {
            if (i % 2 != 0) {
                cout << i << " ";
            }
            i++;
        }
    
        return 0;
    }
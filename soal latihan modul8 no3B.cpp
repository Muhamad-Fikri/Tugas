#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter a value for N: ";
    cin >> N;

    if (N > 50) {
        N = N + 10;
    }
    N = N + 10;

    cout << "Result: " << N << endl;

    return 0;
}
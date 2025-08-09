#include <iostream>
#include <cstdlib> // Mengandung Random
using namespace std;

int main() {
    char a;
    while (true) {
        cout << "mulai lempar dadu ? (y/n) : ";
        cin >> a;
        if (a == 'y') {
            cout << 1 + (rand() % 6) << endl;
        }
        else if (a == 'n') {
            cout << "Program Berhenti" << endl;
            break;
        }
        else {
            cout << "masukan input yang benar !" << endl;
        }
    }
    return 0;
}

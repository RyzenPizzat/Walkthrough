#include <iostream>
using namespace std;
// Else If Statement
// Eps 13 && 14

int main() {
    int a;
    cout << "Masukan angka : ";
    cin >> a;
    // Kondisi Menggunakan Boolean
    if (a == 3) {
        cout << "Angka Sudah di 3" << endl;
    }
    else if(a == 5) {
        cout << "angka sudah di 5" << endl;
    }
    else if(a == 1) {
        cout << "Angka Sudah di 1" << endl;
    }
    else {
        cout << "Angka Bukan di 5,3, dan 1." << endl;
    }

    cout << "Program Selesai";

    return 0;
}

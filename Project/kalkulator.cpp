#include <iostream>
using namespace std;

// Eps 16
// Membuat Kalkulator Sederhana

int main() {
    float a,b,hasil;
    char op;

    cout << "Masukan Angka Pertama : ";
    cin >> a;
    cout << "Masukan Angka Kedua : ";
    cin >> b;
    cout << "Masukan Operator (+,-,/,*) : ";
    cin >> op;

    switch (op) {
        case  'y':
            hasil = a + b;
            cout << "Hasil Tambah " << a << " + " << b << " = " << hasil << endl;
            break;
        case  '-':
            hasil = a - b;
            cout << "Hasil Kurang " << a << " - " << b << " = " << hasil << endl;
            break;
        case  '*':
            hasil = a * b;
            cout << "Hasil Kali " << a << " * " << b << " = " << hasil << endl;
            break;
        case  '/':
            hasil = a / b;
            cout << "Hasil Bagi " << a << " / " << b << " = " << hasil << endl;
            break;
        default:
            cout << "operator Tidak di temukan !" << endl;
    }
    
    
    return 0;
}


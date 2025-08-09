#include <iostream>
using namespace std;

int main() {
    // variabel
    int a = 0;
    cout << "address dari a : " << &a << endl;
    cout << "  nilai dari a : " << a << endl << endl;
    
    int &b = a; // membuat alamat a dan b menjadi sama (Referensi a dan b)
    b = 10;
    cout << "nilai b dirubah ke 10 dan artinya nilai a akan berubah sama seperti b" << endl << endl;
    cout << "address dari b : " << &b << endl;
    cout << "  nilai dari b : " << b << endl;
    cout << "  nilai dari a : " << a << endl;
    return 0;
}
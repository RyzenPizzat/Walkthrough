// Pendahuluan array
#include <iostream>
using namespace std;

int main() {
    // membuat array
    int a[5]; // membuat address array 1 - 5, index 0 - 4.

    a[0] = 0;
    a[1] = 1;
    a[2] = 2;
    a[3] = 3;
    a[4] = 4;

    cout << &a[0] << " nilai nya adalah : " << a[0] << endl;
    cout << &a[1] << " nilai nya adalah : " << a[1] << endl;
    cout << &a[2] << " nilai nya adalah : " << a[2] << endl;
    cout << &a[3] << " nilai nya adalah : " << a[3] << endl;
    cout << &a[4] << " nilai nya adalah : " << a[4] << endl;
    // memanipulasi array metode ke 1
    int *ptr = a;
    *(ptr + 2) = 10;
    cout << endl << &a[2] << " nilai nya adalah : " << a[2] << endl;
    
    // memanipulasi array metode ke 2
    a[3] = 7;
    cout <<endl << &a[3] << " nilai nya adalah : " << a[3] << endl;

    // menghitung jumlah panjang array 
    int length = sizeof(a) / sizeof(int);
    cout << "panjang array a adalah : " << length << endl;


}
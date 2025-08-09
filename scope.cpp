#include <iostream>
using namespace std;

// Global Scope
int x = 10;
int ambil_global() { //mengambil variabel global
    return x;
}
int local_x() { // Variabel scope local_x
    int  x = 5;
    return x;
}
int main() {
    cout << "1.Variabel Global Scope : " << x << endl;
    int x = 7; // Variabel scope main
    cout << "2.Variabel Local Main Scope : "<< x << endl;
    cout << "3.Variabel Ambil Global : " << ambil_global() << endl;
    cout << "4.Variabel Lokal x : " << local_x() << endl;
    {
        // Block Scope
        int x = 3;
        cout << "5.Block Scope : " << x <<  endl;
    }
    cin.get();
    return 0;
}

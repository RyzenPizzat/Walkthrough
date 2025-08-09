#include <iostream>
// materi osn
using namespace std;
// Fungsi Rekursif
int pangkat(int a,int b) {
    int hasil = a;
    for (int i = 1;i < b;i++) {
        hasil = hasil * a;
    }
    return hasil;
}
int PangkatRekursif(int a,int b) {
    if (b <= 1) {
        cout << "akhir rekursif" << endl;
        return a;
    }
    else {
        cout << "rekursif" << endl;
        return a * PangkatRekursif(a,b - 1);
    }
}
int main() {
    int a,b;
    cout << "masukan angka : ";
    cin >> a;
    cout << "dipangkatkan : ";
    cin >> b;
    cout <<"hasil iterasi : "<< pangkat(a,b) << endl;
    cout <<"hasil Rekursif : "<< PangkatRekursif(a,b) << endl;
    
    return 0;
}


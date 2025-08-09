#include <iostream>
using namespace std;

int main() {
    int nomor = 1122;
    cout << "nilai variable nomor sebelum dirubah : " << nomor <<endl;
    // membuat pointer
    int *ptr_nomor = &nomor; //variabel baru (ptr_nomor) mengambil alamat variabel "nomor"
    // Mengubah dan mengakses variabel *ptr_nomor
    *ptr_nomor = 112233;
    cout <<"variabel nomor setelah dirubah : "<< *ptr_nomor << endl;
}
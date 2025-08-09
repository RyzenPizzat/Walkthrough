//lanjutan array dengan penggunaan library
#include <iostream>
#include <array>
using namespace std;

int main() { 
    // array<Tipe Data, Jumlah Array> nama Array;
    array<int,5> nilai;
    for (int i = 0; i <= ((nilai.end() - nilai.begin()) -1); i++) {
        nilai[i] = i + 1;
        cout << "nilai [" << i << "] = " << nilai[i] << endl;
    }
    // Ukuran Array 
    cout << nilai.size() << endl;

    // Nilai Addres awal dari array
    cout << "Address awal : " << nilai.begin() << endl;
    // Nilai Addres akhir dari array
    cout << "Address akhir : " << nilai.end() << endl;
    cout << "Length : " <<  (nilai.end() - nilai.begin()) << endl;
    // Mengambil nilai dengan index 
    cout << "nilai ke 2 : " << nilai.at(2) << endl;
    return 0;

}

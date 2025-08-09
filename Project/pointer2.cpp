#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Manipulasi pada elemen array di pointer
    
    // Membuat array
    vector<int> data = {10,20,30,40,50};
    int *ptr = &data[0]; // jika vector, wajib menggunakan alamat dan indeks, jika array biasa tidak perlu.
    int abc = data.size();
    // pointer pada array data (otomatis ke indeks 1)
    // Pointer pada kasus kali ini, tidak perlu menambahkan & (alamat) karna memiliki banyak elemen (value)
    cout << "Indeks 1 (Default) : " << *ptr << endl;
    
    // mengakses elemen lain pada pointer dengan sintaks *(ptr + <indeks>)
    cout << "Indeks 2 : " << *(ptr + 1) << endl; // Indeks 1

    // Langkah 2 : Dengan looping for (array)
    cout << "Mengakses Pointer dengan looping" << endl;
    for (int i = 0; i < abc; i++)
    {
        cout << "Elemen Ke-" << i << " : " << *(ptr + i) << endl;
    }
    // Langkah 3 : dengan looping for (vector) 
}
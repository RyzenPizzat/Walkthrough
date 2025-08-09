#include <iostream>
using namespace std;
int kuadrat(int x);
int tambah(int a, int b);
void tampilkan (int input);
int main(){
    int hasil,input,a,b,hasil2;
    cout << "masukan input kuadrat : ";
    cin >> input;
    hasil = kuadrat(input);
    tampilkan(hasil);  
    // cout << hasil << endl;
    cout << "masukan nilai a : ";
    cin >> a;
    cout << "masukan nilai b : ";
    cin >> b;
    hasil2 = tambah(a,b);
    cout << hasil2 << endl;
    return 0;
}

int kuadrat(int x) { // Reporter
    int y = x * x;
    return y;
}
int tambah(int a,int b) { // Reporter
    int c = a + b;
    return c;
}
void tampilkan(int input) { // Worker
    cout << "Menampilkan Void" << endl;
    cout << input << endl;
}
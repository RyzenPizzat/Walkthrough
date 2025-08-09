#include <iostream>
using namespace std;
// Latihan Fibonacci 
// Eps 23  
int main() {
    int n;
    int a;
    int b;
    int c;
    cout << "Masukan Nilai Ke n : ";
    cin >> n;
    a = 0;
    b = 1;
    c = 0;
    a = b + c;
        for (int i = 0;i < n;i++) {
        cout << a << " ";
        a = b + c;
        c = b;
        b = a;
    }
    cout << "\nprogram selesai" << endl;
    return 0;
}

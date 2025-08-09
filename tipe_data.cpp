#include <iostream> 
using namespace std;
// 9
int main () {
    // integer (Bilangan bulat)
    int a = 2; // 32-Bit
    long b = 9; // 64-Bit
    short c = 0; // 16- Bit
    // Float (Bilangan Desimal)
    float d = 1.0;
    double e = 2.5; 

    // character
    char f = 'a'; // 1-Bit

    // Boolean
    bool boolean = true;
    string g = "Hello Dunia";
    cout << f << endl;
    // Mengetahui Ukuran (Byte) pada suatu data
    cout << sizeof(f) << "Byte" << endl;
    // Maksimal suatu integer
    cout << INT_MAX << endl;
    // Minimal suatu integer
    cout << INT_MIN << endl;
}
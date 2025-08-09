#include <iostream>
// latihan rekursif kedua
using namespace std;
int faktorial(int a);
int main() {
    int a;
    cout << "masukan faktorial : ";
    cin >> a;
    cout << "faktorial " << a << " adalah : "<< faktorial(a);
    return 0;
}
int faktorial(int a) {
    if (a <= 1 ) {
        cout << a << " = ";
        return a;
    }
    else {
        cout << a << " x ";
        return a * faktorial(a - 1); // f(n!) = n * (n - 1)!
    }
}

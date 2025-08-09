#include <iostream>
using namespace std;

hitung(int n) {
    if (n == 1) {
        cout << "awal dari program" << endl;
        return n;
    }
    else {
        while (n >= 1) {
            cout << hitung(n - 1) << " ";
            return n;
        }
    }
}
int main() {
    int n;
    cout << "masukan nilai yang akan di hitung mundur : ";
    cin >> n;
    cout << hitung(n);
    return 0;
}

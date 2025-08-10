#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double x;
    cout << "masukkan nilai : ";
    cin >> x;
    if (x <= 0 && x >= -1) {
        cout << "True" << endl;
    }
    else {
        cout << "False" << endl;
    }
}
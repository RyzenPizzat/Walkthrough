#include <iostream>
// eps 11
// Relation Expression
using namespace std;

int main() {
    int a = 1,b = 0;
    bool hasil1,hasil2;
    if (a > b) {
        // Lebih Besar ">"
        cout << "a lebih besar dari b !" << endl;
    }
    else if(a < b) {
        // Lebih kecil "<"
        cout << "a lebih kecil dari b !" << endl;
    }
    else {
        cout << "tidak ditemukan apa apa";
    }
    // Tidak Sama Dengan "!="
    hasil1 = (a != b);
    // Sama Dengan "=="
    hasil2 = (a == b);
    cout << hasil1 << endl;
    cout << hasil2 << endl;
    return 0;
}
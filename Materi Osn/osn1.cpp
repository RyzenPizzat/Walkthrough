#include <iostream>
#include <string>
using namespace std;

int main() {
    int A = 1 * 10;
    int B = 2 * 1;
    int C = 7 * 4;
    cout << "nilai a : " << A << endl;
    cout << "nilai B : " << B << endl;
    cout << "nilai C : " << C << endl;
    string terbesar, terkecil;

    if (A > B && A > C) {
        // jika A lebih besar dari B dan C, maka A terbesar
        terbesar = "A";

        // cari yang terkecil, yakni yang lebih kecil antara B dan C
        if (B < C) {
            terkecil = "B";
        } else {
            terkecil = "C";
        }
    } else if (B > A && B > C) {
        // jika B lebih besar dari A dan C, maka B terbesar
        terbesar = "B";

        // cari yang terkecil, yakni yang lebih kecil antara A dan C
        if (A < C) {
            terkecil = "A";
        } else {
            terkecil = "C";
        }
    } else {
        // sampai sini, maka C terbesar
        terbesar = "C";

        // cari yang terkecil, yakni yang lebih kecil antara A dan B
        if (A < B) {
            terkecil = "A";
        }
        else {
            terkecil = "B";
        }
    }

    cout << terbesar << endl;
    cout << terkecil << endl;
}
#include <iostream>
using namespace std;
// Prototype
double hitung_luas(double p, double l);
void Println(double x);
int main() {
    double p,l,hasil;
    cin >> p;
    cin >> l;
    hasil = hitung_luas(p,l);
    Println(hasil);
    // cout << hitung_luas(4,3) << endl;
    return 0;
}

double hitung_luas(double p, double l) {
    double luas = p *l;
    return p * l;
}
void Println(double x) {
    cout << "hasil = " << x << endl;
}
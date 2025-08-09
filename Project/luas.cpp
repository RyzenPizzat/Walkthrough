// Menghitung Luas Persegi Panjang
#include <iostream>
using namespace std;
double luas(double p,double l) {
    // Luas = Panjang x Lebar
    double x = p * l;
    return x;
}
double keliling(double p,double l) {
    // Keliling = 2(Panjang x Lebar)
    double y = 2 * (p + l);
    return y;
}
void Hasil_luas(double p,double l) {
    cout << "Hasil Luas : " << luas(p,l) << endl;

}
void hasil_keliling(double p,double l) {
    cout <<"hasil Keliling : "<< keliling(p,l) << endl;

}
int main()
{
    double p,l;
    cout << "masukan Panjang : ";
    cin >> p;
    cout << "Masukan lebar  : ";
    cin >> l;
    Hasil_luas(p,l);
    hasil_keliling(p,l);
    
    return 0;
}

#include <iostream>
using namespace std;
// basic function
int luas_kotak(int p,int l) {
    int luas = p * l;
    return luas;
}
// overloading
int luas_kotak(int p) {
    int luas = p * p;
    return luas;
}
double luas_kotak(double sisi) {
    double luas = sisi * sisi;
    return luas;
}

int main() {
    cout << "luas kotak 3x5 : " << luas_kotak(3,5) << endl;
    cout << "luas kotak 3x1 : " << luas_kotak(3) << endl;
    cout << "luas kotak 2.5x2.5 : " << luas_kotak(2.5) << endl;
    return 0;
}

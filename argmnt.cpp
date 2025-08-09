#include <iostream>
using namespace std;
// Default Argument / Nilai Standarnya / Nilai Default
double volume(double p = 1,double l = 1, double t = 1);
int main() {
    cout <<"volume kubus : "<< volume(3,4,5) << endl;
    cout << "volume kubus : " << volume(3,4) << endl;
    cout << "volume kubus : " << volume(3) << endl;
    cout << "volume kubus : " << volume() << endl;
    return 0;
}

double volume(double p,double l, double t) {
    return p * l * t;
}


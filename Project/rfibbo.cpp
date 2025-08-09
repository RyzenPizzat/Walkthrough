#include <iostream>
using namespace std;


int fibbo(int a);
int main() {
    int a;
    cout << "masukan deretan : ";
    cin >> a;
    cout <<"deretan ke-"<< a << " adalah : "<< fibbo(a) << endl;
    return 0;
}

int fibbo(int a) {
    cout << a << endl;
    if (a <= 1) {
        // cout << a;
        return a;
    }
    else {
        // cout << a << " + ";
        return fibbo(a - 1) + fibbo (a- 2);
    }
}

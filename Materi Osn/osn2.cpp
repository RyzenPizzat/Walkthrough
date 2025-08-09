#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "variabel j : " << j << endl;
            if (j % 2 == 0) {
                cout << "j % 2 = 0 : " << j << endl;
                cout << "*";
                break;
            }
        }
    }
}
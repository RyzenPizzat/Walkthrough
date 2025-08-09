#include <iostream>
using namespace std;
// eps 22
// Break and Continue
int main() {
    int i = 1;
    for (int i = 1; i <= 10;i++) {
        if (i == 5) {
            cout << "Sudah di 5,berenti!" << endl;
            // continue; 
            break;
        }
        cout << i << endl;
    }
    cout << "\nloop 2 \n" << endl;
    while (i <= 10) {
        i++;
        if (i == 5) {
            cout << "ini sudah di 5 bro" << endl;
            // i++;    
            continue;
        }
    cout << i << endl;
    }
    cout << "akhirnya" << endl;
    return 0;
}

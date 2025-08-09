#include <iostream>
using namespace std;


int main() {
    int password = 500000;
    int n = 0;
    while (true) {
        if (n == password) {
            break;
        }
        else {
            n += 1;
        }
        cout << n << endl;
    }
}
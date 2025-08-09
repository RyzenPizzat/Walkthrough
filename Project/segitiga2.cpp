#include <iostream>
using namespace std;


int main() {
    int n;
    int r_deret;
    cout << "masukan barisan : ";
    cin >> n; 
    cout << "Pola 5" << endl;
     for (int i = 1;i <= n;i++) {
        for (int j = n;j > i;j--) {
            cout << " ";
        }
        for (int k = 1;k < (2* i);k++) {
            cout << '*';
        }
        
        cout << endl;
     }
     cout << "Pola ke 6"<< endl;
     for (int i = 1;i <= n;i++) {
        for (int j = 1;j < i;j++) {
            cout << " ";
        }
        for (int k = n;k >= (2*i - n); k--) {
            cout << "*";
        }
        cout << endl;
     }

    
    return 0;
}

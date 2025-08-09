#include <iostream>
using namespace std;
bool hasil;
bool cek(string S) {
        int n = S.length();
        for (int i = 0; i < n-1;i++) {
            cout <<"huruf : "<< S[i] <<" Nilai Huruf : "<< int(S[i]) - 96 << endl;
            if (S[i] > S[i+1]) return hasil = false;
        }
        return hasil = true;
    }
int main() {
    cek("abegiuu");
    if (hasil == 1) {
        cout << "TRUE" << endl;
    }
    else {
        cout << "FALSE" << endl;
    }
}
#include <iostream>
using namespace std;

int main(){
    bool hasil;
    int jantan = 0, betina = 0;
    int tanggal = 1;
// jantan += 1
// betina += tanggal
// tanggal += 1
    while (betina < (10 * jantan)) {
        jantan += 1;
        betina += tanggal;

        tanggal += 1;
    }
    // cout << betina << endl;
    // cout << (jantan * 10);
    // cout << tanggal;
    hasil = (betina <= (jantan * 10));
    cout << 10 * jantan << endl;
    cout <<  hasil << endl;
}

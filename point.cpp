#include <iostream>
using namespace std;
int main() {
    // Integer a memiliki address ( alamat )
    int a = 5; 
    // Pointer
    int *aPtr = nullptr;
    aPtr = &a;
    *aPtr = 100;

    cout << "alamat  variabel a : " << &a << endl; 
    cout << "Nilai Variabel a : " << *aPtr << endl;   
    return 0;
}

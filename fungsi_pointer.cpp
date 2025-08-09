#include <iostream>
using namespace std;
void counter(int *); // => prototype pointer (deklarasi + *)
void kuadrat (int *);
int main() {
    int a = 5;
    cout << "adress a : " << &a << endl;
    cout << "nilai  a : " << a << endl;
    counter(&a); // fungsi input dengan pointer
    kuadrat(&a);
    cout << "nilai  a : " << a << endl;
    return 0;
}
void counter(int *b) {
    cout << "alamat b : " << b << endl;
    cout << "nilai  b : " << *b << endl; // dereferrencing
}
void kuadrat(int *valptr) {
    *valptr = (*valptr) * (*valptr);
}
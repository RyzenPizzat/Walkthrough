#include <iostream>
using namespace std;

int main()
{
    // Belajar Pointer
    int a = 10;
    int b = 5;
    int *pa = &a;
    int *pb = &b;
    cout << "sebelum : " << "a = " << a << " b = " << b << endl;
    cout << "Setelah : " << "a = " << &a << " b = " << &b << endl;
    *pa = *pa + 10;
    *pb = *pb + 20;
    cout << "Setelah : " << "a = " << a << " b = " << b << endl;
    cout << "Setelah : " << "a = " << *pa << " b = " << *pb << endl;
    cout << "Setelah : " << "a = " << &pa << " b = " << &pb << endl;
}
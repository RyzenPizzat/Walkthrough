#include <iostream>
using namespace std;
// Fungsi sederhana menukar nilai variabel a dan b
void swap(int *a,int *b);
int main() {
    int a,b;
    a = 10;
    b = 25;
    swap(&a,&b);
}

void swap(int *a,int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    cout << "a : " << *a << endl;
    cout << "b : " << *b << endl;
}
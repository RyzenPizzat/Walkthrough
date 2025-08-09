#include <iostream>
// operator Logika (and, or, not)
//                 (&&,  ||,  ! )
// Eps 12

using namespace std;

int main() {
    int a = 1,b = 2;
    bool hasil1,hasil2,hasil3,hasil4;

    //and : kedua nilai harus benar
    cout << "Untuk And" << endl;
    hasil1 = (a == 1) and (b == 2); // True and True
    hasil2 = (a == 2) and (b == 2); // False and True
    hasil3 = (a == 1) and (b && 4); // True and False
    hasil4 = (a == 3) and (b && 4); // False and False
    cout << "True AND True   : " << hasil1 << endl;
    cout << "False AND True  : " << hasil2 << endl;
    cout << "True AND False  : " << hasil3 << endl;
    cout << "False AND False : " << hasil4 << endl;

    // or : kedua nilai diantara harus benar
    cout <<"untuk Or" << endl;
    hasil1 = (a == 1) or (b == 2); // True and True
    hasil2 = (a == 2) or (b == 2); // False and True
    hasil3 = (a == 1) or (b || 4); // True and False
    hasil4 = (a == 3) or (b || 4); // False and False
    cout << "True OR True   : " << hasil1 << endl;
    cout << "False OR True  : " << hasil2 << endl;
    cout << "True OR False  : " << hasil3 << endl;
    cout << "False OR False : " << hasil4 << endl;
    // not : nilai harus salah
    cout << "untuk Not" << endl;
    hasil1 = !(a == 2);
    hasil2 = !(a == 1);
    cout << "False NOT : " << hasil1 << endl;
    cout << "True NOT : " << hasil2 << endl;


    return 0;
}
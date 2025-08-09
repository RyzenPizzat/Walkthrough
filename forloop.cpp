#include <iostream>
using namespace std;
// eps 21
// For looping statement
int main()
{
    cout << "loop 1 \n";
    for (int i = 0;i < 5;i++){
        cout << i << endl;
    }
    cout << "loop 2 \n";
    for (int i = 0;i < 10;i+= 2){
        cout << i << endl;
    }
    cout << "loop 3 \n";
    for (int i = 0;i > -5;i-= 1){
        cout << i << endl;
    }
    cout << "loop 4 \n";
    int total = 0;
    for (int i = 1;i <= 10;i++,total += i){
        cout << i << "||" << total << endl;
    }
    cout << "akhir dari loop" << endl;
    return 0;
}

 
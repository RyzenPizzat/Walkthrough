#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> abc = {10,20,30,40,50};
    int *ptr = &abc[0];
    for (int i = 0; i < 5; i++)
    {
        cout << "Indeks ke-" << i << " : " << *(ptr + i) << endl;
    }
}
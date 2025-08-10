#include <iostream>
#include <vector>
using namespace std;
void panggil(int *ptr)
{
    *ptr = 90;
}
int main()
{

    int umur = 12;
    panggil(&umur);
    cout << umur << endl;
}

#include <iostream>
#include <vector>
using namespace std;
string a;
vector<string> buku = {"Tere Liye", "Bumi Series Ke-1"};
void sapa();
int proses(string x);
int tampilkan();
int tambah_data();
int main()
{
    sapa();
    proses(a);
    return 0;
}

void sapa()
{
    cout << "========== Perpustakaan Majalengka ==========" << endl;
    cout << "1. Tampilkan Data." << endl;
    cout << "2. Tambah Data" << endl;
    cout << "3. Hapus Data" << endl;
    cout << "Pilih Menu : ";
    cin >> a;
    cin.ignore();
}
int proses(string x)
{
    if (x == "1")
    {
        cout << "User Memilih 1" << endl;
        tampilkan();
    }
    else if (x == "2")
    {
        cout << "User Memilih 2" << endl;
        tambah_data();
    }
    else if (x == "3")
    {
        cout << "User Memilih 3" << endl;
    }
    else
    {
        cout << "User salah Memilih!" << endl;
    }
    return 0;
}
int tampilkan()
{
    int panjang = buku.size();
    for (int i = 0; i < (panjang / 2); i++)
    {
        cout << "Buku Ke : " << i + 1 << " : " << buku[i] << " - " << buku[i + 1] << endl;
    }
    sapa();
    return 0;
}
int tambah_data() {
    string t_buku;
    string t_penulis;
    cout << "Masukkan Nama Buku : ";
    getline(cin,t_buku);
    cout << "Masukkan Nama Penulis : ";
    cin.ignore();
    getline(cin,t_penulis);
    cout << "Nama Buku : " << t_buku << ", Nama Penulis : " << t_penulis << endl; 
    buku.push_back(t_buku);
    buku.push_back(t_penulis);
    sapa();
    return 0;
}
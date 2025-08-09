#include <iostream>
#include <vector>
using namespace std;
string a;
vector<string> buku = {"Tere Liye", "Bumi Series Ke-1"};
void sapa();
int proses(string x);
int tampilkan();
int tambah_data();
int hapus_data();
int main()
{
    sapa();
    return 0;
}

void sapa()
{
    cout << "========== Perpustakaan Majalengka ==========" << endl;
    cout << "1. Tampilkan Data." << endl;
    cout << "2. Tambah Data" << endl;
    cout << "3. Hapus Data" << endl;
    cout << "4. Keluar" << endl;
    cout << "=============================================" << endl;
    cout << "Pilih Menu : ";
    cin >> a;
    cin.ignore();
    proses(a);
}
int proses(string x) {
    if (x == "1") {
        if (buku.size() > 0) {
            tampilkan();
        } else {
            cout << "Tidak ada data buku." << endl;
            sapa();
        }
    }
    else if (x == "2") {
        tambah_data();
    }
    else if (x == "3") {
        if (buku.size() > 0) {
            hapus_data();
        } else {
            cout << "Tidak ada data buku untuk dihapus." << endl;
            sapa();
        }
    }
    else if (x == "4") {
        cout << "Terima kasih telah menggunakan Perpustakaan Majalengka." << endl;
        return 0;
    }
    else {
        cout << "Pilihan tidak valid, silakan coba lagi." << endl;
        sapa();
    }
    return 0;
}

int tambah_data()
{
    string t_buku;
    string t_penulis;
    cout << "Masukkan Nama Buku : ";
    getline(cin, t_buku);
    cout << "Masukkan Nama Penulis : ";
    getline(cin, t_penulis);
    cout << "Nama Buku : " << t_buku << ", Nama Penulis : " << t_penulis << endl;
    buku.push_back(t_buku);
    buku.push_back(t_penulis);
    sapa();
    return 0;
}
int tampilkan()
{
    int panjang = buku.size();
    int hasil = panjang / 2;
    cout << hasil << endl;
    for (int i = 0; i <= hasil; i = i += 2)
    {
        cout << "Buku Ke : " << i + 1 << " : " << buku[i] << " - " << buku[i + 1] << endl;
        cout << i << endl;
    }
    sapa();
    return 0;
}

int hapus_data()
{
    int hapus;
    cout << "Masukkan Nomor Buku yang ingin dihapus : ";
    cin >> hapus;
    if (hapus >= 0) {
        buku.erase(buku.begin() + hapus - 1);
        buku.erase(buku.begin() + (hapus ));
    }
    else {
        cout << "Nomor Buku tidak valid!" << endl;
    }
    sapa();
    return 0;
}
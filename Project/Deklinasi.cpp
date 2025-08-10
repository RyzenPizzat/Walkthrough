#include <iostream>
#include <cmath>
using namespace std;
#define M_PI 3.14159265358979323846
int tanggal;
string kalender[12] = {"Januari", "Februari", "Maret", "April", "Mei", "Juni", "Juli", "Agustus", "September", "Oktober", "November", "Desember"};

double deg2rad(double d)
{
    return d * M_PI / 180.0;
}

double fdeklinasi(double tanggal)
{
    float rumus = 23.45 * sin(deg2rad(360.0 / 365.0 * (tanggal + 284.0)));
    return fabs(rumus) < 1e-10 ? 0.0 : rumus;
}
int proses(double a,int b,string c); int isi();
int main() {
    isi();
    return 0;
}

int isi()
{
    string belahan;
    int hari;
    int bulan;
    cout << "masukkan tanggal hari : ";
    // cin >> hari;
    if (!(cin >> hari)) {
        cout << "Salah!" << endl;
        isi();
        return 0;
    }
    cout << "Masukkan Urutan Angka Bulan : ";
    cin >> bulan;
    tanggal = (hari + ((bulan - 1) * 30));
    cout << tanggal << endl;
    cout << "Tanggal Yang dimasukkan adalah : " << hari << " " << kalender[bulan - 1] << endl;
    cout << "Belahan mana anda berada? (Utara/Selatan) : ";
    cin >> belahan;
    double deklinasi = fdeklinasi(tanggal);
    cout << "Deklinasinya adalah : " << deklinasi << " Derajat" << endl;
    proses(deklinasi,tanggal,belahan);
    return 0;
}
int proses(double a,int b,string c) {
    double deklinasi = a; int tanggal = b; string belahan = c;
    if (deklinasi >= -24 && deklinasi <= 0)
    {
        if (tanggal >= 50 && tanggal <= 85)
        {
            if (belahan == "u" || belahan == "U")
            {
                if (deklinasi >= -1 && deklinasi <= 1)
                {
                    cout << "Deklinasi = 0 Derajat, Equinox Pertama Terjadi !" << endl;
                    cout << "Anda Sekarang Berada Di Musim Dingin!" << endl;
                }
                else
                {
                    cout << "Anda Sekarang Berada Di Musim Dingin!" << endl;
                }
            }
            else
            {
                if (deklinasi >= -1 && deklinasi <= 1)
                {
                    cout << "Deklinasi = 0 Derajat, Equinox Pertama Terjadi !" << endl;
                    cout << "Anda Sekarang Berada Di Musim Panas!" << endl;
                }
                else
                {
                    cout << "Anda Sekarang Berada Di Musim Panas!" << endl;
                }
            }
        }
        else if ((tanggal >= 1 && tanggal <= 80) || (tanggal >= 351 && tanggal <= 365))
        {
            if (belahan == "u" || belahan == "U")
            {
                if (deklinasi >= -1 && deklinasi <= 1)
                {
                    cout << "Deklinasi = 0 Derajat, Equinox Pertama Terjadi !" << endl;
                    cout << "Anda Sekarang Berada Di Musim Dingin!" << endl;
                }
                else
                {
                    cout << "Anda Sekarang Berada Di Musim Dingin!" << endl;
                }
            }
            else
            {
                if (deklinasi >= -1 && deklinasi <= 1)
                {
                    cout << "Deklinasi = 0 Derajat, Equinox Pertama Terjadi !" << endl;
                    cout << "Anda Sekarang Berada Di Musim Panas!" << endl;
                }
                else
                {
                    cout << "Anda Sekarang Berada Di Musim Panas!" << endl;
                }
            }
        }
        else if (tanggal >= 271 && tanggal <= 350)
        {
            if (belahan == "u" || belahan == "U")
            {
                cout << "Anda Sedang Berada Di Musim Mendekati Dingin!" << endl;
            }
            else if (belahan == "s" || belahan == "S")
            {
                cout << "Anda Sedang Berada Di Musim Mendekati Panas!" << endl;
            }
        }
    }
    else if (deklinasi >= 0 && deklinasi <= 24)
    {
        if (tanggal >= 81 && tanggal <= 170)
        {
            if (belahan == "u" || belahan == "U")
            {
                cout << "Anda Sekarang Berada Di Musim Semi!" << endl;
            }
            else
            {
                cout << "Anda Sekarang Berada Di Musim Gugur!" << endl;
            }
        }
        else if (tanggal >= 171 && tanggal <= 270)
        {
            if (belahan == "u" || belahan == "U")
            {
                if (deklinasi >= 0 && deklinasi <= 1)
                {
                    cout << "Deklinasi = 0 Derajat, Equinox Kedua Terjadi!" << endl;
                    cout << "Anda Sekarang Berada Di Musim Gugur!" << endl;
                }
                else
                {
                    cout << "Anda Sekarang Berada Di Musim Gugur!" << endl;
                }
            }
            else if (belahan == "s" || belahan == "S")
            {
                if (deklinasi >= 0 && deklinasi <= 1)
                {
                    cout << "Deklinasi = 0 Derajat, Equinox Kedua Terjadi!" << endl;
                    cout << "Anda Sekarang Berada Di Musim Semi!" << endl;
                }
                else
                {
                    cout << "Anda Sekarang Berada Di Musim Semi!" << endl;
                }
            }
        }
    }
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    class biodata {
        public:
        string nama;
        int umur;
        char jenis_kelamin;
        float tinggi;
        string motivasi;
        biodata(string a,int b,char c,float d,string e) {
            nama = a;
            umur = b;
            jenis_kelamin = c;
            tinggi = d;
            motivasi = e;
        }
        void isi_data() {
            cout << "========== DATA SISWA ==========" << endl;
            cout << "NAMA             :" << " " << nama << endl;
            cout << "UMUR             :" << " " << umur << " tahun" << endl;
            cout << "JENIS KELAMIN    :" << " " << jenis_kelamin << endl;
            cout << "TINGGI           :" << " " << tinggi << endl;
            cout << "MOTIVASI         :" << " " << motivasi << endl;
        }
    };
    int x2;
    char x3;
    float x4;
    string x5;
    string x1;
    cout << "Masukkan Nama : ";
    getline(cin, x1);
    cout << "Masukkan Umur : ";
    cin >> x2;
    cout << "Masukkan Jenis Kelamin : ";
    cin >> x3;
    cout << "Masukkan Tinggi : ";
    cin >> x4;
    cout << "Masukkan Motivasi Mu : ";
    cin.ignore();
    getline(cin,x5);
    biodata TotalData(x1,x2,x3,x4,x5);
    TotalData.isi_data();


}
#include <iostream>
#include <string>
using namespace std;

struct DetailAlamat
{
    string desa;
    string kota;;
};

struct Orang
{
    string nama;
    DetailAlamat alamat;
    int umur;
};

int main() {
    Orang mhs[3];

    for (int i = 0; i <= 2; i++)
    {

    // mengisi data
    cout << "Mengisi Data" << endl;
    cout << "Nama : ";
    getline(cin ,  mhs[i].nama);
    cout << "Alamat : ";
    getline(cin , mhs[i].alamat.desa);
    cout << "Alamat : ";
    getline(cin , mhs[i].alamat.kota);
    cout << "Umur : ";
    cin >> mhs[i].umur;
    cout << endl;

    }

    for (int i = 0; i <= 2; i++)
    {
    // tampilkan
    cout << "Menampilkan Data" << endl;
    cout << "Nama : " << mhs[i].nama << endl;
    cout << "Desa : " << mhs[i].alamat.desa << endl;
    cout << "Kota : " << mhs[i].alamat.kota << endl;
    cout << "Umur : " << mhs[i].umur << endl;
    }
}

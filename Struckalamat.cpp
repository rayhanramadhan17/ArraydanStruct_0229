#include <iostream>
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
    Orang mhs;
    // mengisi data
    cout << "Mengisi Data" << endl;
    cout << "Nama : ";
    cin >> mhs.nama;
    cout << "Alamat : ";
    cin >> mhs.alamat.desa;
    cout << "Alamat : ";
    cin >> mhs.alamat.kota;
    cout << "Umur : ";
    cin >> mhs.umur;
    cout << endl;
    // tampilkan
    cout << "Menampilkan Data" << endl;
    cout << "Nama : " << mhs.nama << endl;
    cout << "Alamat : " << mhs.alamat.desa << ", " << mhs.alamat.kota << endl;
    cout << "Umur : " << mhs.umur << endl;
}


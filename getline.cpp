#include <iostream>
using namespace std;
struct detailAlamat
{
    string desa;
    string kota;
};
struct Orang 
{
    string nama;
    detailAlamat alamat;
    int umur;
};

int main () {
    Orang mhs;
    // Mengisi data
    cout << "Mengisi Data" << endl;
    cout << "Nama : " ;
    getline(cin, mhs.nama);
    cout << "desa : " ;
    getline(cin, mhs.alamat.desa);
    cout << "kota : " ;
    getline(cin, mhs.alamat.kota);
    cout << "Umur : " ;
    cin >> mhs.umur;
    cout << endl;
    // Menampilkan data
    cout << "Menampilkan Data" << endl;
    cout << "Nama : " << mhs.nama << endl;
    cout << "desa : " << mhs.alamat.desa << endl;
    cout << "kota : " << mhs.alamat.kota << endl;
    cout << "Umur : " << mhs.umur << endl;

}
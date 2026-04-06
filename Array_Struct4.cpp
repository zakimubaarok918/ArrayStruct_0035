#include <iostream>
using namespace std;

struct alamatdetail
{
    string desa;
    string kota;
};

struct mahasiswa
{
    string nama;
    alamatdetail alamat;
    int umur;
};

int main()
{
    //deklarasi variable struct
    mahasiswa mhs;
    //mengisi data
    cout << "Isikan data nama : ";
    getline(cin, mhs.nama);
    cout << "Isikan data kota : ";
    getline(cin, mhs.alamat.kota);
    cout >> "Isikan data desa : ";
    getline(cin, mhs.alamat.desa);
    cout << "Isikan data usia : ";
    cin >> mhs.umur
    
    cout << "Data Mahasiswa" << endl;
    cout << "Nama : " << mhs.nama << endl;
    cout << "Alamat :"<< mhs.alamat.kota << endl;
    cout << "Usia: " << mhs.umur << endl;
}
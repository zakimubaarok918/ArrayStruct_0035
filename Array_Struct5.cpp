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
    mahasiswa mhs[3];
    //mengisi data
    for (int i = 0; 1<= 2; i++)

    {
    cout << "Isikan data nama : ";
    getline(cin, mhs[i]nama);
    cout << "Isikan data kota : ";
    getline(cin, mhs[i].alamat.kota);
    cout >> "Isikan data desa : ";
    getline(cin, mhs[i].alamat.desa);
    cout << "Isikan data usia : ";
    cin >> mhs[i].umur;
    cin.ignore();
    
    cout << "Data Mahasiswa" << endl;
    cout << "Nama : " << mhs.nama << endl;
    cout << "Alamat :"<< mhs.alamat.kota << endl;
    cout << "Usia: " << mhs.umur << endl;
    }
}
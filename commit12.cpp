cout << "Isikan data nama : ";
    getline(cin, mhs[i]nama);
    cout << "Isikan data kota : ";
    getline(cin, mhs[i].alamat.kota);
    cout >> "Isikan data desa : ";
    getline(cin, mhs[i].alamat.desa);
    cout << "Isikan data usia : ";
    cin >> mhs[i].umur;
    cin.ignore();
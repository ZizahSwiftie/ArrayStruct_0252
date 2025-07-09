#include <iostream>
using namespace std;

// Mendefinisikan struct untuk alamat
struct DetailAlamat {
    string kota;
    string provinsi;
};

// Mendefinisikan struct utama yang berisi struct lain
struct Mahasiswa {
    string nama;
    string nim;
    DetailAlamat alamat; // Nested struct
};

int main() {
    Mahasiswa mhs[2];
    for (int i = 0; i < 2; i++) {
        cout << "Mahasiswa ke-" << i + 1 << endl;
        cout << "Masukan nim = ";
        cin >> mhs[i].nim;
        // Input untuk nama akan ditambahkan nanti
        cout << "Masukan kota = ";
        cin >> mhs[i].alamat.kota;
        cout << "Masukan provinsi = ";
        cin >> mhs[i].alamat.provinsi;
    }
    return 0;
}
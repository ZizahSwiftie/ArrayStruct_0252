#include <iostream>
using namespace std;

// Mendefinisikan struct untuk alamat
struct DetailAlamat {
    string kota;
    string provinsi;
};

// Mendefinisikan struct utama yang menggunakan struct lain
struct Mahasiswa {
    string nama;
    string nim;
    DetailAlamat alamat; // Nested struct
};

int main() {
    // Fungsi main masih kosong, akan diisi pada tahap berikutnya
    return 0;
}

#include <iostream>
using namespace std;

struct DetailAlamat {
    string kota;
    string provinsi;
};

struct Mahasiswa {
    string nama;
    string nim;
    DetailAlamat alamat;
};

int main() {
    // Membuat array dari object struct
    Mahasiswa mhs[2];

    // Menambahkan loop untuk mengisi data mahasiswa
    for (int i = 0; i < 2; i++) {
        cout << "Mahasiswa ke-" << i + 1 << endl;
        cout << "Masukan nim = ";
        cin >> mhs[i].nim;
        cout << "Masukan nama = ";
        cin >> mhs[i].nama;
        cout << "Masukan kota = ";
        cin >> mhs[i].alamat.kota;
        cout << "Masukan provinsi = ";
        cin >> mhs[i].alamat.provinsi;
    }

    return 0;
}
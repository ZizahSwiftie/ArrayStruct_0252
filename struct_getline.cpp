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
    // Fungsi main masih kosong, akan diisi pada tahap berikutnya
    return 0;
}
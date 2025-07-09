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
    Mahasiswa mhs[2];

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

    cout << endl;
    cout << "Menampilkan Data" << endl;
    cout << endl;

    // Menambahkan loop untuk menampilkan data yang sudah diisi
    for (int i = 0; i < 2; i++) {
        cout << "Mahasiswa ke-" << i + 1 << endl;
        cout << "NIM = " << mhs[i].nim << endl;
        cout << "Nama = " << mhs[i].nama << endl;
        cout << "Kota = " << mhs[i].alamat.kota << endl;
        cout << "Provinsi = " << mhs[i].alamat.provinsi << endl;
    }
}
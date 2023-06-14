#include <iostream>
#include <string>
#include <vector>
using namespace std;

class pengarang {
public:
    string nama;
    vector<string> buku;
    vector<string> penerbit;

    pengarang(string _nama) {
        nama = _nama;
    }
};

class penerbit {
public:
    string nama;
    vector<string> penulis;

    penerbit(string _nama) {
        nama = _nama;
    }
};

int main() {
    // Membuat penambahan Nama pengarang
    pengarang joko("Joko");
    pengarang lia("Lia");
    pengarang giga("Giga");
    pengarang asroni("Asroni");

    // Menambahakan nama Penerbit Buku
    penerbit gamaPress("Gama Press");
    penerbit intanPariwara("Intan Pariwara");

    // Mengisi data buku
    joko.buku = { "fisika", "algoritma" };
    lia.buku = { "basisdata" };
    giga.buku = { "matematika", "multimedia 1" };
    asroni.buku = { "pasar pemrograman" };
    giga.penerbit = { "game press", "Intan Pariwira" };

    // Mengisi data penerbit
    gamaPress.penulis = { joko.nama, lia.nama, giga.nama };
    intanPariwara.penulis = { asroni.nama, giga.nama };



    // Daftar pengarang pada penerbit "Gama Press"
    cout << "DAFTAR NAMA PENGARANG PADA PENERBIT \"Gama Press\":" << endl;
    for (const string& nama : gamaPress.penulis) {
        cout << nama << endl;
    }

    // Daftar nama pengarang dalam penerbit "Intan Pariwara"
    cout << "DAFTAR NAMA PENGARANG DALAM PENERBIT \"Intan Pariwara\":" << endl;
    for (const string& nama : intanPariwara.penulis) {
        cout << nama << endl;
    }

    // Daftar penerbit yang diikuti "Giga"
    cout << "Daftar penerbit yang diikuti \"Giga\":" << endl;
    for (const string& nama : giga.penerbit) {
        cout << nama << endl;
    }

    // Daftar buku yang dikarang "Joko"
    cout << "Daftar buku yang dikarang \"Joko\":" << endl;
    for (const string& buku : joko.buku) {
        cout << buku << endl;
    }

    // Daftar buku yang dikarang "Lia"
    cout << "Daftar buku yang dikarang \"Lia\":" << endl;
    for (const string& buku : lia.buku) {
        cout << buku << endl;
    }

    // Daftar buku yang dikarang "Asroni"
    cout << "Daftar buku yang dikarang \"Asroni\":" << endl;
    for (const string& buku : asroni.buku) {
        cout << buku << endl;
    }

    // Daftar buku yang dikarang "Giga"
    cout << "Daftar buku yang dikarang \"Giga\":" << endl;
    for (const string& buku : giga.buku) {
        cout << buku << endl;
    }

    return 0;
}
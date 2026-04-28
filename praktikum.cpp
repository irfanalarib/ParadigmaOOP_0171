#include <iostream>
#include <string>

using namespace std;

class Barang {
    string nama;
    int jumlah;
    string kategori;
    string tanggalProduksi;

    void tampilkanSpesifikasi() {
        cout << "Nama Barang      : " << nama << endl;
        cout << "Jumlah Stok      : " << jumlah << endl;
        cout << "Kategori         : " << kategori << endl;
        cout << "Tanggal Produksi : " << tanggalProduksi << endl;
    }
};

int main() {
    Barang elektronik;
    elektronik.nama = "Laptop Gaming";
    elektronik.jumlah = 10;
    elektronik.kategori = "Elektronik";
    elektronik.tanggalProduksi = "12 Maret 2024";

    Barang nonElektronik;
    nonElektronik.nama = "Meja";
    nonElektronik.jumlah = 50;
    nonElektronik.kategori = "Furniture / Non-Elektronik";
    nonElektronik.tanggalProduksi = "05 Januari 2024";

    cout << "DATA BARANG ELEKTRONIK" << endl;
    elektronik.tampilkanSpesifikasi();

    cout << "DATA BARANG NON-ELEKTRONIK" << endl;
    nonElektronik.tampilkanSpesifikasi();
}
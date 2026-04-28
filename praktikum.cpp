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
}
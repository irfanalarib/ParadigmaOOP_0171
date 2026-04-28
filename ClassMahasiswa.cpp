#include <iostream>
#using namespace std;

class Mahasiswa {
    public: 
        int NIM;
        string nama;
        float Nilai;

        void printData() {
            cout << "NIM: " << NIM << endl;
            cout << "Nama: " << nama << endl;
            cout << "Nilai: " << Nilai << endl;
        }
};

int main(){
    Mahasiswa mhs; // deklarasi objek mhs dari kelas Mahasiswa

    mhs.NIM = 2024; 
    mhs.nama = "Sule"; 
    mhs.Nilai = 75.5; 

    mhs.printData();
}
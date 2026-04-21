#include <iostream>
using namespace std;

class Barang {
    public:
        string nama;
        int jumlah;
        string kategori;
        string tanggalProduksi;

        void tampilSpek(){
            cout << "Nama Barang: " << nama << endl;
            cout << "Jumlah Barang: " << jumlah << endl;
            cout << "Kategori Barang: " << kategori << endl;
            cout << "Tanggal Produksi: " << tanggalProduksi << endl;

        }
};

int main() {
    
    Barang elektronik;
    Barang nonElektronik;

    elektronik.nama = "Laptop";
    elektronik.jumlah = 1;
    elektronik.kategori = "Elektronik";
    elektronik.tanggalProduksi = "1945-08-17";
    elektronik.tampilSpek();

    cout << endl;

    nonElektronik.nama = "supersemar";
    nonElektronik.jumlah = 1;
    nonElektronik.kategori = "Non Elektronik";
    nonElektronik.tanggalProduksi = "1970-03-11";
    nonElektronik.tampilSpek();
}
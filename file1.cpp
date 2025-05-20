#include <iostream>
using namespace std;

class Barang{
public:
    string namaBarang;
    int kodeBarang;

    Barang(string namaBarang, int kodeBarang) {
        this->namaBarang = namaBarang;
        this->kodeBarang = kodeBarang;
    }

    void menampilkanData() {
        cout << "Nama barang: " << namaBarang << endl;
        cout << "Kode barang: " << kodeBarang << endl;
    };
};

int main () {
    Barang brg1("Kulkas", 105);
    Barang brg2("Mesin Cuci",107);
    brg1.menampilkanData();
    brg2.menampilkanData();
    return 0;
}
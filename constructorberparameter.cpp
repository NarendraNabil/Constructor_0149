#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
public:
    mahasiswa(int nim, string nama); // contructor dgn parameter
};

// definisi constructor dengan parameter
mahasiswa::mahasiswa(int nim, string nama) {
    cout << "Contructor Dengan Parameter Terpanggil" << endl;
    cout << "NIM  : " << nim << endl;
    cout << "Nama : " << nama << endl;
}

int main(){
    // memanggil constructor dgn parameter
    mahasiswa mhs(12345, "Pascal");
    return 0;
}
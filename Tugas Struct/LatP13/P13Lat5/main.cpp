#include <iostream>
using namespace std;

struct Sepeda {
    string Merk;
    string Type;
    int Tahun;
    string Harga;
};

int main() {
    Sepeda sepeda;
    Sepeda* pointerSepeda = &sepeda; // Pointer yang menunjuk ke objek sepeda

    // Mengisi nilai member menggunakan pointer
    pointerSepeda->Merk = "Polygon";
    pointerSepeda->Type = "Sepeda Gunung";
    pointerSepeda->Tahun = 2013;
    pointerSepeda->Harga = "2.000.000";

    // Mengakses dan mencetak nilai member menggunakan pointer
    cout << "Merk: " << pointerSepeda->Merk << endl;
    cout << "Type: " << pointerSepeda->Type << endl;
    cout << "Tahun: " << pointerSepeda->Tahun << endl;
    cout << "Harga: " << pointerSepeda->Harga << endl;

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

struct Sepeda {
    string merk;
    string type;
    int tahun;
    string harga;
};

int main() {
    Sepeda sepeda1;

    sepeda1.merk = "Polygon";
    sepeda1.type = "Sepeda Gunung";
    sepeda1.tahun = 2013;
    sepeda1.harga = "2.000.000";

    cout << "Merk: " << sepeda1.merk << endl;
    cout << "Type: " << sepeda1.type << endl;
    cout << "Tahun: " << sepeda1.tahun << endl;
    cout << "Harga: " << sepeda1.harga << endl;

    return 0;
}

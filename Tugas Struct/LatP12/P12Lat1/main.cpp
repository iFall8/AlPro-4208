#include <iostream>

using namespace std;

struct BangunDatar {
    int panjang;
    int lebar;
    float phi=3.14;

    int luasPersegiPanjang() {
        return panjang * lebar;
    }
};

struct BangunRuang {
    int radius;
    int tinggi;
    float phi=3.14;

    float luasLingkaran() {
        return 22/7 * radius * radius;
    }

    float volumeKerucut() {
        return (1/3) * phi * radius * radius * tinggi;
    }

    float volumeBola() {
        return (4/3) * phi * radius * radius * radius;
    }
};

int main() {
    BangunDatar persegiPanjang;
    persegiPanjang.panjang = 5;
    persegiPanjang.lebar = 3;
    cout << "Luas Persegi Panjang: " << persegiPanjang.luasPersegiPanjang() << endl;

    BangunRuang kerucut;
    kerucut.radius = 2;
    kerucut.tinggi = 6;
    cout << "Luas Lingkaran: " << kerucut.luasLingkaran() << endl;
    cout << "Volume Kerucut: " << kerucut.volumeKerucut() << endl;

    BangunRuang bola;
    bola.radius = 3;
    cout << "Volume Bola: " << bola.volumeBola() << endl;

    return 0;
}

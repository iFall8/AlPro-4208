#include <iostream>

using namespace std;

typedef struct rumus
{
    int panjang, lebar, radius, tinggi;
    float phi = 3.14;

    int persegiPanjang()
    {
        return panjang * lebar;
    }
    float lingkaran()
    {
        return 22.0 / 7 * radius * radius;
    }
    float kerucut()
    {
        return 1.0 / 3 * phi * radius * radius * tinggi;
    }
    float bola()
    {
        return 4.0 / 3 * phi * radius * radius * radius;
    }
};

rumus bangun;

int main()
{
    bangun.panjang = 15;
    bangun.lebar = 10;
    bangun.radius = 15;
    bangun.tinggi = 10;

    cout << "Luas Persegi Panjang: " << bangun.persegiPanjang() << endl;
    cout << "Luas Lingkaran: " << bangun.lingkaran() << endl;
    cout << "Volume Kerucut: " << bangun.kerucut() << endl;
    cout << "Volume Bola: " << bangun.bola() << endl;
    return 0;
}

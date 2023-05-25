#include <iostream>

using namespace std;

int penjumlahanRekursif(int a, int b) {
    if (b == 0)
        return a;
    else
        return penjumlahanRekursif(a, b - 1) + 1;
}

int penguranganRekursif(int a, int b) {
    if (b == 0)
        return a;
    else
        return penguranganRekursif(a, b - 1) - 1;
}

int perkalianRekursif(int a, int b) {
    if (a == 0 || b == 0)
        return 0;
    else
        return a + perkalianRekursif(a, b - 1);
}

int pembagianRekursif(int a, int b) {
    if (a < b)
        return 0;
    else
        return 1 + pembagianRekursif(a - b, b);
}

int perpangkatanRekursif(int a, int b) {
    if (b == 0)
        return 1;
    else
        return a * perpangkatanRekursif(a, b - 1);
}

int main()
{
    cout << penjumlahanRekursif(2,4) << endl;
    cout << penguranganRekursif(3,4) << endl;
    cout << perkalianRekursif(5,3) << endl;
    cout << pembagianRekursif(4,5) << endl;
    cout << perpangkatanRekursif(5,2) << endl;
    return 0;
}

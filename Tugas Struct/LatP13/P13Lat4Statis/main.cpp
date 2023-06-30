#include <iostream>

using namespace std;

struct murid
{
    int tahunLulus;
    string nim, nama, jurusan;
};

murid lulus[4];
int main()
{
    // Data murid
    lulus[0].nim = "A11.2020.01234";
    lulus[0].nama = "Andi";
    lulus[0].jurusan = "Broadcasting";
    lulus[0].tahunLulus = 2023;

    lulus[1].nim = "A11.2010.01234";
    lulus[1].nama = "Budi";
    lulus[1].jurusan = "Sistem Informasi";
    lulus[1].tahunLulus = 2013;

    lulus[2].nim = "A11.2000.01234";
    lulus[2].nama = "Ali";
    lulus[2].jurusan = "DKV";
    lulus[2].tahunLulus = 2003;

    lulus[3].nim = "A11.1990.01234";
    lulus[3].nama = "Siti";
    lulus[3].jurusan = "Kesehatan";
    lulus[3].tahunLulus = 1993;

    // Menampilkan data
    cout << "NIM             |Nama           |Jurusan            |Tahun Lulus            |" << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << lulus[i].nim << "    |";
        cout << lulus[i].nama << "           |";
        cout << lulus[i].jurusan << "            |";
        cout << lulus[i].tahunLulus << "             |" << endl;
    }

    return 0;
}

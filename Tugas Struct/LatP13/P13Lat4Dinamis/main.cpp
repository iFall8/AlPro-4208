#include <iostream>

using namespace std;

struct Mahasiswa {
    string nim;
    string nama;
    string jurusan;
    int tahunLulus;
};

int main() {
    int jumlahMahasiswa; // Jumlah mahasiswa dalam data

    cout << "Masukkan jumlah mahasiswa: ";
    cin >> jumlahMahasiswa;

    Mahasiswa dataMahasiswa[jumlahMahasiswa];

    // Mengisi data mahasiswa
    for (int i = 0; i < jumlahMahasiswa; ++i) {
        cout << "Masukkan data mahasiswa ke-" << (i + 1) << endl;

        cout << "NIM: ";
        cin >> dataMahasiswa[i].nim;

        cout << "Nama: ";
        cin >> dataMahasiswa[i].nama;

        cout << "Jurusan: ";
        cin >> dataMahasiswa[i].jurusan;

        cout << "Tahun Lulus: ";
        cin >> dataMahasiswa[i].tahunLulus;

        cout << endl;
    }

    // Mencetak data mahasiswa
    cout << "Nim\t\tNama\tJurusan\t\tTahun Lulus" << endl;
    for (int i = 0; i < jumlahMahasiswa; ++i) {
        cout << dataMahasiswa[i].nim << "\t" << dataMahasiswa[i].nama << "\t"<< dataMahasiswa[i].jurusan << "\t" << dataMahasiswa[i].tahunLulus << endl;
    }

    return 0;
}

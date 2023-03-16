#include <iostream>
/*
Gatot Ifal Falaah Waskitha - A11.2022.14356
Tugas 1 - Algoritna Pemrograman
*/
using namespace std;
int tambah(int a,int b){
int hasil;
hasil = a+b;
return hasil;
}

int kurang(int x, int y){
int hasil;
hasil=x-y;
return hasil;
}

int arry(int aray[5]){
int hasil;
for (int p=0;p<5;p++){
    hasil+=aray[p];
}
return hasil;
}

int rataarry(int aray[5]){
int hasil,rata;
for (int p=0;p<5;p++){
    hasil+=aray[p];
    rata=hasil/5;
}
return rata;
}

int main()
{
    int j,aray[5]={1,2,3,4,5};
    cout << "hasil tambah = "<< tambah(5,7) << endl;
    cout << "hasil kurang = "<< kurang(7,6) << endl;
    cout << arry(aray) << endl;
    cout << rataarry(aray) << endl;

    cout << "masukan 5 bilangan array" <<endl;
    for (j=0;j<5;j++){
        cout << "masukan bilangan ke " << j+1 <<endl;
        cin >> aray[j];
    }
    cout << arry(aray) << endl;
    cout << rataarry(aray) << endl;
    return 0;
}

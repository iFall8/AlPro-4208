#include <iostream>
using namespace std;
/*
Gatot Ifal Falaah W.
A11.2022.14356
*/


//No 1
bool isGanjil(int bil){
    if (bil%2==1){
        return 1;
    }
    return 0;
}
void genapKecil(int arr[],int size){
    int genap=99999;
    int index=0;
    for (int step=0;step<size;step++){
        if(!isGanjil(arr[step])){
            if(arr[step]<genap){
                genap=arr[step];
                index=step;
            }
        }
    }
    cout << "Nilai Genap Terkecil = " << genap << endl;
    cout << "Terletak pada index ke = "<< index;
}

//No 2
void selectionSort(int arr[],int size){
for (int step=0;step<size-1;step++){
    int min_idx=step;
    for (int i=step+1;i<size;i++){
        if (arr[min_idx]<arr[i]){
            min_idx=i;
        }
    }
    swap(arr[min_idx],arr[step]);
}
}
void bubbleSort(int arr[],int size){
    for (int step=0;step<size-1;step++){
        for (int i=0;i<size-step-1;i++){
            if(arr[i]<arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
        }
    }
}


void printArray(int arr[],int size){
    for (int i=0;i<size;i++){
        cout << arr[i]<< " ";
    }
    cout << endl;
}

int main()
{
    //No 1
    cout << "No. 1" << endl;
    int arrey[100];
    int sais;
    cout << "Masukkan jumlah array = ";
    cin >> sais;
    for (int j=0;j<sais;j++){
        cout << "Masukan bilangan ke " << j+1 << " = ";
        cin >> arrey[j];
    }
    cout << endl;
    genapKecil(arrey,sais);
    cout<<endl;
    cout<<endl;


    //No 2
    cout << "No. 2" << endl;
    int data[]={4,8,1,3};
    int size=sizeof(data)/sizeof(data[0]);
    selectionSort(data,size);
    cout << "Selection Sort: ";
    printArray(data,size);
    bubbleSort(data,size);
    cout << "Bubble Sort: ";
    printArray(data,size);
    return 0;
}

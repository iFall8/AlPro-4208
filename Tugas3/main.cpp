#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

// Searching
int linearSearch(const vector<int>& arr, int target) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;  // Target ditemukan pada indeks ke-i
        }
    }
    return -1;  // Tidak ditemukan dalam array
}

int binarySearch(const vector<int>& arr, int target) {
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid;  // Target ditemukan pada indeks mid
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1;  // Tidak ditemukan dalam array
}

// Sorting
void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void insertionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void selectionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

int main() {
    vector<int> arr = {5, 2, 9, 1, 7};
    int target = 9;

    // Waktu Linear Search
    clock_t startTime = clock();
    int index = linearSearch(arr, target);
    clock_t endTime = clock();
    double searchTimeSeq = static_cast<double>(endTime - startTime) / CLOCKS_PER_SEC;

    if (index != -1) {
        cout << "Linear Search: Target ditemukan pada indeks " << index << endl;
    } else {
        cout << "Linear Search: Target tidak ditemukan dalam array" << endl;
    }

    cout << "Waktu Linear Search: " << searchTimeSeq << " detik" << endl;
    cout << endl;

    // Waktu Binary Search
    startTime = clock();
    index = binarySearch(arr, target);
    endTime = clock();
    double searchTimeBin = static_cast<double>(endTime - startTime) / CLOCKS_PER_SEC;

    if (index != -1) {
        cout << "Binary Search: Target ditemukan pada indeks " << index << endl;
    } else {
        cout << "Binary Search: Target tidak ditemukan dalam array" << endl;
    }

    cout << "Waktu Binary Search: " << searchTimeBin << " detik" << endl;
    cout << endl;

    // Waktu Bubble Sort
    startTime = clock();
    bubbleSort(arr);
    endTime = clock();
    double sortTimeBubble = static_cast<double>(endTime - startTime) / CLOCKS_PER_SEC;

    cout << "Bubble Sort\n Array setelah diurutkan: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Waktu Bubble Sort: " << sortTimeBubble << " detik" << endl;
    cout << endl;

    // Waktu Insertion Sort
    startTime = clock();
    insertionSort(arr);
    endTime = clock();
    double sortTimeInsertion = static_cast<double>(endTime - startTime) / CLOCKS_PER_SEC;

    cout << "Insertion Sort\n Array setelah diurutkan: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Waktu Insertion Sort: " << sortTimeInsertion << " detik" << endl;
    cout << endl;

    // Waktu Selection Sort
    startTime = clock();
    selectionSort(arr);
    endTime = clock();
    double sortTimeSelection = static_cast<double>(endTime - startTime) / CLOCKS_PER_SEC;

    cout << "Selection Sort\n Array setelah diurutkan: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Waktu Selection Sort: " << sortTimeSelection << " detik" << endl;

    return 0;
}

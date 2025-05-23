#include <iostream>
using namespace std;

/*
coded by Fa'iz Maulana Habibi,
        Program Studi : Teknik Informatika
        NIM : A11.2024.15726
*/

// Bubble sort prosedure using void 

void bubbleSort(int arr[], int n) {
    bool swapped;
    for (int i = 0; i < n-1; i++) {
        swapped = false;
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout << "Original array: ";
    for (int num : arr) cout << num << " ";
    
    bubbleSort(arr, n);
    
    cout << "\nSorted array: ";
    for (int num : arr) cout << num << " ";
    return 0;
}
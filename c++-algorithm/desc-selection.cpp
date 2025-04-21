#include <iostream>
using namespace std;

/*
coded by Fa'iz Maulana Habibi,
        Program Studi : Teknik Informatika
        NIM : A11.2024.15726
*/

void selectionSortDescending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int max_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[max_idx]) {  // Changed to > for descending
                max_idx = j;
            }
        }
        swap(arr[max_idx], arr[i]);
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    selectionSortDescending(arr, n);

    cout << "Sorted (Descending): ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}
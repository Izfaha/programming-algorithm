#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int array[] = {2, 5, 1, 60, 22};
    int size = sizeof(array) / sizeof(array[0]);
    bubbleSort(array, size);
    
    // Print the sorted array
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}
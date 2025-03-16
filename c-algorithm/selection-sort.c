#include <stdio.h>
#include <stdlib.h>

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void selectionSort(int arr[], int size){
    for(int currentIndex = 0; currentIndex < size - 1; currentIndex++){
        int min_idx = currentIndex; // Assume this will be start index (first unsorted element is smallest)
        for(int compareIndex = currentIndex + 1; compareIndex < size; compareIndex++){
            // visualization of looping and comparing each index in array
            printf("Comparing %d (index %d) vs %d (index %d)\n",
                arr[compareIndex], compareIndex,
                arr[min_idx], min_idx);
                // change min_idx to currentIndex
            if(arr[currentIndex] < arr[min_idx]){
                min_idx = currentIndex;
            }
        }
        if(currentIndex != min_idx){
            int temp = arr[currentIndex];
            arr[currentIndex] = arr[min_idx];
            arr[min_idx] = temp;
        }
        // printf("Comparing %d and %d\n", arr[currentIndex], arr[compareIndex]);
    }
}

int main(){
    int arr[] = {10, 45, 22, 12, 67, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    // Print an original array
    printf("Original Array : ");
    printArray(arr, size);
    printf("\n");
    // void func for sorting
    selectionSort(arr, size);
    printf("\n");
    printf("Sorted Array : ");
    printArray(arr, size);
    return 0;
}
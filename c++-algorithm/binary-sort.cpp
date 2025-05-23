#include <iostream>
using namespace std;

/*
coded by Fa'iz Maulana Habibi,
        Program Studi : Teknik Informatika
        NIM : A11.2024.15726
*/

int binarySearch(int arr[], int n, int target) {
    int low = 0, high = n-1;
    while (low <= high) {
        int mid = low + (high-low)/2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            low = mid+1;
        else
            high = mid-1;
    }
    return -1;
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 23;
    
    int result = binarySearch(arr, n, target);
    
    if (result == -1)
        cout << "Element not found";
    else
        cout << "Element found at index: " << result;
    return 0;
}
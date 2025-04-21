#include <iostream>
using namespace std;

/*
coded by Fa'iz Maulana Habibi,
        Program Studi : Teknik Informatika
        NIM : A11.2024.15726
*/

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target)
            return i;
    }
    return -1;
}

int main() {
    int arr[] = {10, 50, 30, 70, 80, 20};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 70;
    
    int result = linearSearch(arr, n, target);
    
    if (result == -1)
        cout << "Element not found";
    else
        cout << "Element found at index: " << result;
    return 0;
}
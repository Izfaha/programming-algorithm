#include <iostream>
using namespace std;

/*
coded by Fa'iz Maulana Habibi,
        Program Studi : Teknik Informatika
        NIM : A11.2024.15726
*/

void printArrayBeforeSorting(int B[], int sizeArray){
    for(int i = 0; i < sizeArray; ++i){
        cout << B[i] << " ";
    }
    cout << endl;
}

void sortArray(int B[], int sizeArray){
    bool ascendingOrDescending = B[0] < B[sizeArray-1];

    if(ascendingOrDescending == B[0] < B[sizeArray-1]){
        for(int i = 0; i < sizeArray; ++i){
            int minIndex = i;
    
            for(int j = minIndex + 1; j < sizeArray; ++j){
                if(ascendingOrDescending ? (B[j]<B[minIndex]) : (B[j]>B[minIndex])){
                    minIndex = j;
                }
            }
            swap(B[i], B[minIndex]);
        }
    }
}

int main(){
    int B[]={15, 12, 20, 50, 100};
    int sizeArray = sizeof(B)/sizeof(B[0]);
    B[4] = 1; // Rubah array DISINI

    cout << "Array before sorting : ";
    printArrayBeforeSorting(B, sizeArray);
    
    sortArray(B, sizeArray);

    cout << "Array after sorting : ";
    sortArray(B, sizeArray);
    printArrayBeforeSorting(B, sizeArray);

    return 0;
}
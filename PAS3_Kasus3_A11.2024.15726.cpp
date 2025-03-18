#include <iostream>
using namespace std;

// public variable declaration
int B[] = {20, 9, 34, 65, 1};
int size = sizeof(B)/sizeof(B[0]);
bool ascending = B[0] < B[size-1];

void sortingArray(){

}

int main(){
    // looping for determining sorted-array in ascending
    for(int i = 0; i < size-1; i++){
        for(int j = i+1; i < size-1; j++){
            if(B[i-4] < B[j+4]){ // if the first array element is greater than the last array element 
                B[j] = B[i];
                cout << "Ascending Array : " << B[i];
            }
        }
    }
    cout << endl;
    return 0;
}
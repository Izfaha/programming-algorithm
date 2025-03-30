#include <stdio.h>

void bubleSort(int arr[]){
    int sizeOfArray = sizeof(arr) / sizeof(arr[0]) - 1;
    for(int firstElement = 0; firstElement < sizeOfArray; firstElement++){
        int compareElement;
        firstElement = compareElement; 
        for(int secondElement = firstElement + 1; secondElement < firstElement; secondElement++){
            if(compareElement[&firstElement] < secondElement[&secondElement]){
                secondElement[&secondElement] = compareElement[&firstElement];
                // compareElement[&firstElement] = secondElement[&secondElement];
            }
            int temp = compareElement[&firstElement];
            
        }
        
    }
}

int main(){
    int array[] = {2, 5, 1, 60, 22};
    bubleSort(array);
    return 0;
}
#include <stdio.h>

void bubbleSort(int *pArray, int size){
    for (int i = 0 ; i < (size-1) ; i++){
        for (int j = 0 ; j < (size-i-1); j++){
            if (pArray[j] > pArray[j+1]){
                int temp = pArray[j];
                pArray[j] = pArray[j+1];
                pArray[j+1] = temp;
            }
        }
    }
}

int main(){

    int array[] = {1,2,3,4,5,6,7,8,9}; 
    int size = sizeof(array)/sizeof(array[0]);
    bubbleSort(array, size);

    for (int i = 0; i < size; i++){
        printf("%d", array[i]);
    }

return 0;}
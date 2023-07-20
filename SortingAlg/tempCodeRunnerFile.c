#include <stdio.h>

int partition(int *pArray, int size, int start, int end) {
    
    int pivot = pArray[end];
    int i = start -1;

    for (int j = start; j < end; j++) {
        if(pArray[j] < pivot) {
            int temp = pArray[i];
            pArray[i] = pArray[j];
            pArray[j] = temp;
        }
    }
    i++;
    int temp = pArray[i];
    pArray[i] = pArray[end];
    pArray[end] = temp;

    return i;
}

void quicksort(int *pArray, int size, int start, int end) {

    if(end <= start){ //base case
        return;
    }

    int pivot = partition(pArray, size, start, end);
    quicksort(pArray, size, start, pivot-1);
    quicksort(pArray, size, pivot+1, end);
}


int main(){

    int array[] = {9,5,3,6,2,1,4,8,7};
    int size = sizeof(array)/sizeof(array[0]);

    quicksort(array, size, 0, size-1);

    for (int i = 0; i < (size); i++){
        printf("%d", array[i]);
    }

return 0;}
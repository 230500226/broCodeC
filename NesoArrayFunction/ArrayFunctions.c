#include <stdio.h>

int add(int b[], int len){  //b[] is a pointer pointing to first element
    int sum = 0;
    int c[5] = {1,2,3,4,5};
     
        for (int i=0; i<len; i++){
            printf("c is %d", c[i]);
            sum += b[i];
        }
    return sum;
}

int main(){

    int a[] = {1,2,3,4};
    int len = sizeof(a)/sizeof(a[0]);

        printf("\n%d", add(a, len)); //only passing the base address of array "a"
                                    //the array name "a" is treated as pointer

return 0;}
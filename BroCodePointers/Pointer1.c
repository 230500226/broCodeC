//advantages of pointers:
// • Less time in program execution.
// • Working on the original variable.
// • With the help of pointers, we can create data structures (linked-list, stack, queue).
// • Returning more than one values from functions.
// • Searching and sorting large data very easily.
// • Dynamically memory allocation

#include <stdio.h>

void printAge(int *pAge){
    printf("Age value is %d\n", *pAge); //dereference
}

int main()
{
// pointer = a "variable-like" reference that holds a memory address to another variable, array, etc.
   //           some tasks are performed more easily with pointers
   //           * = indirection operator (value at address)

    int age = 21;
    int *pAge = NULL; //good practice to assign NULL if declaring the pointer and assigning it later
    *pAge = &age;
    // printf("address of age: %p\n", &age);
    // printf("value of age: %p\n", pAge);
 
    // printf("value of age: %d\n", age);
    // printf("value at stored address: %d\n", *pAge);

    // printf("size of age : %d bytes\n", sizeof(age));
    // printf("size of pAge : %d bytes\n", sizeof(pAge));
    
    printAge(pAge);

    return 0;
}

#include <stdio.h>

/* function declaration */
int *getStaticVariableAddress();

int main () {
    int *staticVarAddress;

    /* get the address of the static variable */
    staticVarAddress = getStaticVariableAddress();

    /* output the returned value */
    printf("Address of static variable is: %p\n", staticVarAddress);
    printf("Value of static variable is: %d\n", *staticVarAddress);

    return 0;
}

int *getStaticVariableAddress() {
    /* define a static variable */
    static int staticVar = 5;

    /* return its address */
    return &staticVar;
}
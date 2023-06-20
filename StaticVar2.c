#include <stdio.h>

/* function declaration */
int getNextValue();

int main () {
    int i;

    /* call getNextValue 5 times */
    for (i = 0; i < 5; i++) {
        printf("Next value is: %d\n", getNextValue());
    }

    return 0;
}

int getNextValue() {
    /* define a static variable */
    static int counter = 0;

    /* increment the counter */
    counter++;

    /* return its value */
    return counter;
}
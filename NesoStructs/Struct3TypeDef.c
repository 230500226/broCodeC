#include<stdio.h>

typedef int INTEGER;    

typedef struct car{
        char *engine;
        char *fuel_type;
        int fuel_tank;
        int seating_cap;
        float mileage;
    } car;

int main(){

    INTEGER i = 100;
    printf("\n%d", i);

    car c1, c2;

    c1.engine = "VCTI 1.5L";
    c2.engine = "Dual VTVT 2.5L";

    printf("%s\n", c1.engine);
    printf("%s\n", c2.engine);    

return 0;} 
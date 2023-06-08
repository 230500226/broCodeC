#include<stdio.h>

//global variables
    

int main(){

//declare basic struct
    struct{
            char *engine;
            char *fuel_type;
            int fuel_tank;
            int seating_cap;
            float mileage;
        } car1, car2;

    car1.engine = "VCTI 1.5L";
    car2.engine = "Dual VTVT 2.5L";

    printf("%s\n", car1.engine);
    printf("%s\n", car2.engine);    

return 0;} 
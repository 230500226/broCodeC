#include<stdio.h>

typedef struct car{
        char *engine;
        char *fuel_type;
        int fuel_tank;
        int seating_cap;
        float mileage;
    } car;

int main(){

    car c1 = {"VCTI 1.5L", "Petrol", 40, 5, 13.7};
    car c2 = {"Dual VTVT 2.5L", "Diesel", 25, 5, 19.6};

    //designated initialisation

    car c1 = {.engine = "VCTI 1.5L", .fuel_type = "Petrol", .fuel_tank = 40};
    car c2 = {.engine = "Dual VTVT 2.5L", .fuel_type = "Diesel", .fuel_tank = 25};

    printf("Car 1: Engine: %s, Fuel Type: %s, Fuel Tank Capacity: %dL, Seating Capacity: %d, Mileage: %.1f km/L\n", c1.engine, c1.fuel_type, c1.fuel_tank, c1.seating_cap, c1.mileage);
    printf("Car 2: Engine: %s, Fuel Type: %s, Fuel Tank Capacity: %dL, Seating Capacity: %d, Mileage: %.1f km/L\n", c2.engine, c2.fuel_type, c2.fuel_tank, c2.seating_cap, c2.mileage);

return 0;} 
#include <stdio.h>

//Confitions for bit-filed
    // Var must be a struct or union mem
    // must be of type int (singed or unsigned)

    //define struct
    typedef struct{
        // unsigned int var1: width(bits)
        unsigned int x:5;
        unsigned int y:3;
    } bitStruct;

    //Time example
    typedef struct{
        unsigned int hours : 5; //(23 max) if more than max it it will output 0
        unsigned int minutes : 6; //(59 max)
        unsigned int seconds : 6; //(59 max)
    }timeBitField;

    typedef struct{
        unsigned int hours;
        unsigned int minutes;
        unsigned int seconds;
    }time;

int main(){

    timeBitField time1 = {23,59,58};
    time time2 = {23,59,59};

    printf("The size of the time struct with bitfield is %d\n", sizeof(time1)); //4bytes
    printf("The time is %d : %d : %d\n", time1.hours, time1.minutes, time1.seconds);

    printf("The size of the time struct without bitfield is %d\n", sizeof(time2)); //12bytes
    printf("The time is %d : %d : %d\n", time2.hours, time2.minutes, time2.seconds);

return 0;}
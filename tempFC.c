/************* AUTHOR INFO **************/
// Name: Shahied Rustin
// Student No.: 230500226
// Course Title: Software Design 1 (SDN150S)
// Date: 29/05/2023
/************* HEADER FILES ***************/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

/************* GLOBAL VARIABLES ************/
// state global variable if any
/******** FUNCTIONS (DECLARE/DEFINE) *********/
//typedef struct
//{ struct with bit-field (choose width length)
//type [member_name] : width
//.tag name;
/************* MAIN FUNCTION**************/

int main(){

    char unit;
    float temp;

    printf("\n (F) or (C)?");
    scanf("%c",&unit);

    unit = toupper(unit);

        if (unit == 'C'){
            printf("Enter the temp in C\n");
            scanf("%f",&temp);
            temp = (temp * 9 / 5) +32;
            printf("\n That is %.1fF in F", temp);
        }else if(unit == 'F'){
            printf("Enter the temp in F");
            scanf("%f",&temp);
            temp = ((temp -32)*5)/9;
            printf("\n That is %.1fC in C", temp);
        }else printf("You have selected an invalid unit");   

    printf("\n");
    
return 0;}
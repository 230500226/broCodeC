/************* AUTHOR INFO **************/
// Name: Shahied Rustin
// Student No.: 230500226
// Course Title: Software Design 1 (SDN150S)
// Date: 30/05/2023
/************* HEADER FILES ***************/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
/************* GLOBAL VARIABLES ************/
// state global variable if any
/******** FUNCTIONS (DECLARE/DEFINE) *********/
//typedef struct
//{ struct with bit-field (choose width length)
//type [member_name] : width
//.tag name;
/************* MAIN FUNCTION**************/
int main(){
 char name[25];

    start:
       printf("\nEnter your name: ");
            fgets(name, 25, stdin);
                name[strlen(name)-1 ] = '\0';

            while(strlen(name) == 0){
                printf("\nYou have not entered your name?");
                goto start;
            }

        printf("\n hello %s\n", name);
    
return 0;}
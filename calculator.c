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

    char op;
    double d1;
    double d2;
    double result;

    printf("\n Enter the operation type(+ - * /): ");
    scanf("%c",&op);

    if(op != '+' && op != '-' && op != '*' && op != '/'){
        printf("\n Invalid operation \"%c\"", op);
        return 1;
    }

    printf("\n Enter first number: ");
    scanf("%lf",&d1);

    printf("\n Enter second number: ");
    scanf("%lf",&d2);

    switch(op){
        case '+':
            result = d1 +d2;
                break;

        case '-':
            result = d1 - d2;
                break;

        case '*':
            result = d1 * d2;
                break;

        case '/':
            result = d1 / d2;
                break;
    }

    printf("\n%.2lf %c %.2lf = %.2lf", d1,op,d2,result);
return 0;}
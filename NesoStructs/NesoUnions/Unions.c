#include <stdio.h>

int main(){

    struct Sabc{
        int a;  //&a is hex001
        char b; //&b is hex002
    };

    union Uabc{
        int a;  //&a is hex001
        char b; //&b is hex001
    };  //changes to one member will reflect change to other members
        //size of union is = size of largest union member

    union abc{
        int a;
        int b;
    }var;

    var.a =65;
    printf("a is %d\n",var.a); //a is int 65
    printf("b is %c\n",var.b); //65 is ascii code for A

    union sizeAbc{
        int a;      //size 4 bytes
        char b;     //size 1 bytes
        double c;   //size 8 bytes LARGEST = union size
        float d;    //size 4 bytes
    };

    printf("size of union is %d\n", sizeof(union sizeAbc));

return 0;}
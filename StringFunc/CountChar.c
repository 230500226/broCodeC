#include<stdio.h>
#include<string.h>


int main(){

    char str[50];
    char c;
    int count = 0;
    char *p = str;

    printf("please enter a string:\n");
    fgets(str, sizeof(str), stdin);

    printf("please enter the character to search for:\n");
    scanf(" %c", &c);

    while ((p = strchr(p, c)) != NULL){
        count++;
        p++;
    }

    printf("%c had apppeared %d times in the string %s \n", c, count, str);

return 0;}
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
    char str[50];

    printf("Please enter a string:\n");
        scanf("%s", str);

        for (int i=0; i<strlen(str) ; i++)
           str[i] = toupper(str[i]);

        printf("Upper case is %s\n", str);
        printf("Or just %s with strupr\n", strupr(str));
            //only works on some platforms like windows I think

    return 0;
}
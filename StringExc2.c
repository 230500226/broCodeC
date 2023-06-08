#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
    char str[50];
    int count = 0;
    char *p = str;

    printf("Please enter a string:\n");
    scanf("%s", str);

    while (*p != '\0') {
        char ch = tolower(*p);
        switch (ch) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                count++;
                break;
        }
        p++;
    }

    printf("The string %s contains %d vowels\n", str, count);

    return 0;
}
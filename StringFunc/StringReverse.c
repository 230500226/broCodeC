#include<stdio.h>
#include<string.h>

int main() {
    char str[50];
    char strReversed[50];

    printf("Please enter a string:\n");
        scanf("%s", str);

        int j = 0; //to add the end of string line to end of strReversed
        for (int i=strlen(str)-1; i>=0 ; i--){
            strReversed[j] = str[i];
            j++;
        }
        strReversed[j] = '\0';

        //or using concatenation
            // for (int i=strlen(str)-1; i>=0 ; i--)
            //     strncat(strReversed, &str[i], 1);

    printf("\nThe string %s in reverse is %s with loop", str, strReversed);

        printf("\nOr just %s is ", str);
        printf("%s without loop using strrev\n",strrev(str));
            //only works on some platforms like windows
    return 0;
}
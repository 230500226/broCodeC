#include <stdio.h>
#include <string.h>

int main(){

    char string1[] = "Bro";
    char string2[] = "Code";

   //strlwr(string1);                bro           // converts a string to lowercase
   //strupr(string1);                BRO           // converts a string to uppercase
   //strcat(string1, string2);       BroCode       // appends string2 to end of string1
   //strncat(string1, string2, 1);   BroC          // appends n characters from string2 to string1
   //strcpy(string1, string2);       Code          // copy string2 to string1
   //strncpy(string1, string2, 2);   Cro              // copy n characters of string2 to string1
   
   //strset(string1, '?');           ???   //sets all characters of a string to a given character
   //strnset(string1, 'x', 1);       xro   //sets first n characters of a string to a given character
   //strrev(string1);                orB   //reverses a string

   //int result = strlen(string1);               3 letters  // returns string length as int
   //int result = strcmp(string1, string2);      1 becuase not equal but 0 ifelse  // string compare all characters
   //int result = strncmp(string1, string2, 1);  1 becuase not equal but 0 ifelse  // string compare n characters
   //int result = strcmpi(string1, string1);     does the same but igonre case  // string compare all (ignore case)
   //int result = strnicmp(string1, string1, 1); does the same but igonre case  // string compare n characters (ignore case)

    printf("%s", string1);
    printf("%s", string2);


return 0;}
// Write a program in C to extract a substring from a given string
#include <stdio.h>
#include <string.h>
int main() {
    char str[100],ex[20];
    printf("Enter a string: ");
    gets(str);
    printf("\n String:%s",str);
    printf("\n Extraxt word:");
    gets(ex);
    printf("\n extract a substring from a given string:%s",strstr(str,ex));
}

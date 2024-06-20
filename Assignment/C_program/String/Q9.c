//Write a program in C to find the maximum number of characters in a string.
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);
     int length=strlen(str);
    printf("Maximum number of characters in the string: %d\n", length);
}

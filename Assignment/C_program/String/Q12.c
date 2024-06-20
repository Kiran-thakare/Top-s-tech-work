// Write a program in C to find the number of times a given word 'is' appears in
//the given string.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char word[] = "is";
    int count = 0;

    printf("Enter a string: ");
    gets(str);
    char* position = strstr(str, word);
    while (position != NULL) {
        count++;
        position = strstr(position + 1, word);
    }
     printf("The word 'is' appears %d times in the given string.\n", count);
}

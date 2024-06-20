//Write a program in C to find the length of a string without using library functions.
#include <stdio.h>
int stringLength(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}
int main() {
    char String[100];
    printf("Enter a string: ");
    scanf("%s", &String);
    int len = stringLength(String);
    printf("Length of the string: %d\n", len);
}

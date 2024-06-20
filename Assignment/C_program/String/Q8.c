//Write a program in C to count the total number of vowels or consonants in a string.
#include<stdio.h>
#include<ctype.h>
int main(){
    char str[100];
    int vowels=0,consonants=0;
    int i = 0;
     printf("Enter a string: ");
    scanf("%s",&str);
    while(str[i]!='\0'){
        char ch=tolower(str[i]);
        if (ch!='\0') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
                vowels++;
            } else {
                consonants++;
            }
        }
        i++;
    }
    printf("Total vowels: %d\n", vowels);
    printf("Total consonants: %d\n", consonants);
}

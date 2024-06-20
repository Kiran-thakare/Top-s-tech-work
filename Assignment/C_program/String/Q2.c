//Write a program in C to separate individual characters from a string.
#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    printf("Enter The String :");
    gets(str);
    printf("The  Sepration Of Individuaql charcter ");
    for(int i=0; str[i]!= '\0'; i++){
        printf("%c\t",str[i]);
    }
}

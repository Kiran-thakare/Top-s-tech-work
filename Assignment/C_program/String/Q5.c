//Write a program in C to compare two strings without using string library functions.
#include<stdio.h>
int main(){
    int i;
    char str1[40],str2[40];
    printf("Enter First String:");
    gets(str1);
    printf("Enter Secound String:");
    gets(str2);
    for(i=0;str1[i] == str2[i] && str1=='\0';i++){}
        if(str1[i]<str2[i]){
            printf("String 2 Greater than String 1");
        }
        else if (str1[i]>str2[i]){
             printf("String 1 Greater than String 2");
        }
        else{
            printf("both String Are Equal");
        }
    }

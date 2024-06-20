//Write a program in C to copy one string to another string.
#include<stdio.h>
#include<string.h>
int main(){
    char str1[20],str2[20];
    printf("Enter The String :");
    scanf("%s",&str1);
    printf("\n First String :%s",strcpy(str2,str1));
    printf("\n To copy one string to another string:%s",str2);
}

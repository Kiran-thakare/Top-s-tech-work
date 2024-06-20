//WAP to print factorial of given number
#include<stdio.h>
int main(){
    int num,i,fact=1;
    printf("The Number :");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        fact=fact*i;

    }
    printf("The Factorial Number Of Given Number :%d",fact);
}

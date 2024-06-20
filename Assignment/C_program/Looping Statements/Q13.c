// calculate the Factorial of a Given Number using while loop
#include<stdio.h>
int main(){
    int num,i=1,fact=1;
    printf("Enter The Number :");
    scanf("%d",&num);
    while(i<=num){
        fact=fact*i;
        i++;

    }
    printf("The Factorial:%d",fact);
}

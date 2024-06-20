//  WAP to find number is even or odd using ternary operator
#include<stdio.h>
int main(){
    int num;
    printf("Enter The Number : ");
    scanf("%d",&num);
    (num%2==0)?printf("Number Is Even"):printf("Number Is Odd");
}

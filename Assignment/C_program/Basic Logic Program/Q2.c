// Q 2. Write a program to make Simple calculator (to make addition, subtraction, multiplication,
//  division and modulo)
#include<stdio.h>
int main(){
    int num1,num2,result;
    printf("\n Enter The value Of number: ");
    scanf("%d %d ", &num1,&num2);
    result=num1+num2;
    printf("\n The sum is :%d",result);
    result=num1-num2;
     printf("\n The subraction is :%d",result);
    result=num1*num2;
    printf("\n The multiplication is :%d",result);
    result=num1/num2;
    printf("\n The divide is :%d",result);
    result=num1%num2;
    printf("\n The module is :%d",result);
}

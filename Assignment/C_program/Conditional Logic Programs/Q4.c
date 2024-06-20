//WAP to make simple calculator (operation include Addition, Subtraction, Multiplication, Division, modulo)
// using conditional statement
#include<stdio.h>
int main(){

    int num1,num2;
    char op ;
    printf("Select The oprator(+ ,-,*,/,%): ");
    scanf("%c",&op);
    printf("Enter Number 1: ");
    scanf("%d",&num1);

     printf("Enter Number 2: ");
    scanf("%d",&num2);

    switch(op){
      case '+':
      printf("The Addition Of Two Number: %d",num1+num2);
        break;
    case '-':
      printf("The Substract Of Two Number: %d",num1-num2);
        break;
    case '*':
      printf("The Multipale  Of Two Number: %d",num1*num2);
        break;
    case '/':
      printf("The Divide  Of Two Number: %d",num1/num2);
        break;
    case '%':
      printf("The module  Of Two Number: %d",num1%num2);
        break;
    default:
        printf("This Is Error ");
        break;
   }

}

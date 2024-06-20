// WAP to find maximum number among 3 numbers using ternary operator
#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("Enter The first Number:");
    scanf("%d %d %d",&num1,&num2,&num3);
    (num1>num2)&&(num1>num3)?printf("\n Number 1 is max"):(num2>num3)?printf("\n Number 2 Is max"):printf("\n Number 3 Is max");


}

//13.WAP to find minimum number among 3 numbers using ternary operator
#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("Enter The first Number:");
    scanf("%d %d %d",&num1,&num2,&num3);
    (num1<num2)&&(num1<num3)?printf("\n Number One Is Minimum "):(num2<num3)?printf("\n Number Two Is Minimum"):printf("\n Number Three Is Minimum");


}

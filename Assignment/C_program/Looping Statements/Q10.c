// Write a program you have to make a summation of first and last Digit. (E.g.,
// 1234 Ans: -5)
#include<stdio.h>
int main(){
    int num,firstdigit,lastdigit,sum=0;
    printf("Enter The Number :");
    scanf("%d",&num);
     lastdigit=num%10;
     firstdigit=num;
    while(num>=10){
        num=num/10;
    }
     sum=firstdigit+lastdigit;
    printf("Sum Of First Digit And Last Digit :%d",sum);
}

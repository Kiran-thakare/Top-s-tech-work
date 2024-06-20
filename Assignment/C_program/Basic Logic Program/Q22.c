///22. Calculate compound interest (Compound Interest formula:
// a. Formula to calculate compound interest annually is given by:
// Amount= P(1 + R/100)t
// b. Compound Interest = Amount – P
#include<stdio.h>
int main(){
    float amount,pri,rate,time,CI;
    printf("Enter The Principal amount:");
    scanf("%f",&pri);
    printf("Enter time:");
    scanf("%f",&time);
    printf("Enter Rate :");
    scanf("%f",&rate);
    amount= pri*(1 + rate/100)*time;
    CI= amount - pri;
    printf("\n the amount is:%f",amount);
    printf("\n the amount is:%f",CI);

}

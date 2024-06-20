//19.Calculate compound interest
#include<stdio.h>
int main(){
    float amount,pri,rate,time;
    printf("Enter The Principal amount:");
    scanf("%f",&pri);
    printf("Enter time:");
    scanf("%f",&time);
    printf("Enter Rate :");
    scanf("%f",&rate);
    amount= pri*(1 + rate/100)*time;
    printf("%f the amount is",amount);


}

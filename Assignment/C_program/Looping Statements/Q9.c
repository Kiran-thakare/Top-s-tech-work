//Write a program make a summation of given number
#include<stdio.h>
int main(){
    int num,sum=0,temp,rem;
    printf("Enter The Number :");
    scanf("%d",&num);
    temp=num;
    while(temp>0){
        rem=temp%10;
        sum=sum+rem;
        temp=temp/10;
    }
    printf("The sum Of Digit:%d",sum);
}

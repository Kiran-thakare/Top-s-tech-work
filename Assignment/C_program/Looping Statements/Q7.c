// WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746
#include<stdio.h>
int main(){
    int num,rem,rev=0,temp;
    printf("Enter Number :");
    scanf("%d",&num);
    printf("The Original Number is ::%d\n",num);
    temp=num;
    while(temp>0){
        rem=temp%10;
        rev=(rev*10)+rem;
        temp=temp/10;
    }
    printf("You are Enterd reverse Number :%d",rev);
}

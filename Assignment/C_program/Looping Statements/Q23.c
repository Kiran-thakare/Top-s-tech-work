//C Program to Reverse a Number Using FOR Loop
#include<stdio.h>
int main(){
    int num,rem,rev=0,temp;
     printf("\n Enter The Number :");
    scanf("%d",&num);
    printf("\n Your Original Number :%d",num);
     temp=num;
   for(;temp!=0;temp/10){
        rem=temp%10;
        rev=(rev*10)+rem;
        temp=temp/10;
    }
    printf("\n The Reverse Number :%d",rev);
        if(num==rev){
            printf("\n  Palindrome Number ");
        }
        else{
            printf("\n Not palindrome Number");
        }

}

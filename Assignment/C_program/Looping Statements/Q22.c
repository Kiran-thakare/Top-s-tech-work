//Accept 3 numbers from user using while loop and check each numbers palindrome
#include<stdio.h>
//#include<string.h>
int main(){
    int num,rem,rev=0,temp;
     printf("\n Enter The Number :");
    scanf("%d",&num);
    printf("\n Your Original Number :%d",num);
     temp=num;
    while(temp>0){
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

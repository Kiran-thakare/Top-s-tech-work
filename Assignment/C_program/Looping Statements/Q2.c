//2. WAP to accept 5 numbers from user and display all numbers
#include<stdio.h>
int main(){
   int number[5],i;
   printf("Enter Number : \n ");
   for( i = 0; i <5; i++)
   {
    printf("enter number %d: ",i+1);
    scanf("%d",&number[i]);
   }
   printf("You Entered Number :");
   for(i = 0; i <5 ; i++)
   {
    printf("%d",number[i]);
   }


}

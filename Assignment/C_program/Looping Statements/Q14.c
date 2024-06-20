// .Accept 5 numbers from user and find those numbers factorials
#include<stdio.h>
int main(){
    int num,i,j=1,fact;
    for(i=0;i<5;i++){
        printf("Enter A Number :");
        scanf("%d",&num);
         fact=1;
    }
   for(j=1;j<=i;j++){
        fact=fact*j;
   printf("\n factorial No :%d",fact);
   }
}

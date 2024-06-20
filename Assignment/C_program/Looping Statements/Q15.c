//15.Calculate sum of 10 numbers using of while loop
#include<stdio.h>
int main(){
    int i,sum=0;
    int num;
    for(i=0;i<10;i++){
        printf("Enter Number %d:",i+1);
        scanf("%d",&num);

    }
    while(i<=num){
        sum+=num;
        i++;
    }
 printf("Sum Of :%d",sum);
 return 0;
}

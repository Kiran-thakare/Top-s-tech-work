//Write a program to find out the max from given number (E.g., No: -1562 Max number is 6)
#include<stdio.h>
int main(){
    int i,num[5],max=0;

    for(i=0;i<4;i++){
    printf("Enter Number %d:",i+1);
     scanf("%d",&num[i]);
    }

    for(i=0;i<4;i++){
        if(num[i]>max){
            max=num[i];
        }
    }
      printf("Number Is Maximum:%d",max);

}

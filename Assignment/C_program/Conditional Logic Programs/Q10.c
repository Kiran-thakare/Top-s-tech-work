//. WAP to check whether a number is negative, positive or zero.
#include<stdio.h>
int main(){
    int num;
    printf("Enter The Number :");
    scanf("%d",&num);
    if(num>0){
        printf("Positive Number ");
    }
    else if (0<num){
        printf("Number is Negative ");
    }
    else{
        printf("Number Is Zero ");
    }

}

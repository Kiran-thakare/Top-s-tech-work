//WAP to check if the given year is a leap year or not.
#include<stdio.h>
int main(){
    int year;
    printf("Enter Year: ");
    scanf("%d",&year);
    if(year%4==0){
       printf("This year Is leap Year");

    }
    else{
        printf("This Year Is Not A Leap Year");
    }
}

//.Convert years into days and months
#include<stdio.h>
int main(){
    int year , months, days;
    printf("Enter The year: ");
    scanf("%d",&year);
    months=12*year;
    days=365*year;
    printf("the month :%d",months);
    printf("\n the days:%d",days);
}

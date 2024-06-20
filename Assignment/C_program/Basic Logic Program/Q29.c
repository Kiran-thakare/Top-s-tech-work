//Convert minutes into seconds and hours
#include<stdio.h>
int main(){
    int minutes,seconds,hours;
    printf("Enter The minutes:");
    scanf("%d",&minutes);
    seconds=minutes*60;
    hours=minutes/60;
    printf("The Hours :%d",hours);
    printf("\n The Secounds :%d",seconds);
}

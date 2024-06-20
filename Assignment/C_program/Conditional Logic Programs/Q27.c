//37. WAP to show
// i. Monday to Sunday using switch case
#include<stdio.h>
int main(){
    int month;
    printf("Enter Day :");
    scanf("%d",&month);
    switch (month)
    {
    case 1:
        printf("Monday");
        break;
     case 2:
        printf("Tuesday");
        break;
     case 3:
        printf("Wednesday ");
        break;
     case 4:
        printf("Thursday");
        break;
     case 5:
        printf("Friday");
        break;
     case 6:
        printf("Saturday");
        break;
     case 7:
        printf("Sunday");
        break;
    default:
        printf("invlid number ");
        break;
    }
}

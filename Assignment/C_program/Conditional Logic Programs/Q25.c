// Accept the input month number and print number of days in that month.
#include<stdio.h>
int main(){
    int num;
    printf("Enter The Month Number :");
    scanf("%d",&num);
    switch (num)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
    printf("Month Have 31 Days");
    break;
     case 2:
     printf("the month in leap year taotal 29 days \n");
     printf("this month Without leap year 28 Days \n ");
     break;
     case 4:
    case 6:
    case 9:
    case 11:
    printf("Month have 30 Days ");
     break;
default:
    printf("This Enter Invalid Month ");
        break;
    }
}

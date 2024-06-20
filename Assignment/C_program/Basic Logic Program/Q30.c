//. WAP to convert years into days and days into years
#include<stdio.h>
int main(){
    int days , year ;
    printf("Enter The Year :");
    scanf("%d",&year);
    days=year*365;
    printf("The Days :%d",days);
 //and
    printf("\n Enter The Days :");
    scanf("%d",&days);
    year=days/365;
    printf(" The Years:%d",year);

}

//WAP to print Fibonacci series up to given numbers
#include<stdio.h>
int main(){
    int num,n1=0,n2=1,count,temp;
    printf("Enter Number :");
    scanf("%d",&num);
    printf("\n Fibbonaci Series:");
    printf("%d,%d,",n1,n2);
    count=2;
    while (count<=num)
    {
        temp=n1+n2;
        n1=n2;
        n2=temp;
        count++;
        printf("%d,",temp);
    }

}

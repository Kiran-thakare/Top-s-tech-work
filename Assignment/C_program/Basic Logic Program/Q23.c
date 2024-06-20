// WAP to calculate swap 2 numbers with using of multiplication and division.
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter The A :");
    scanf("%d",&a);
    printf("Enter The B :");
    scanf("%d",&b);
    printf("Before Swaping Number a=%d b=%d",a,b);
    a=a*b;
    b=a/b;
    a=a/b;
    printf("\n After Swaping Number a=%d b=%d",a,b);

}

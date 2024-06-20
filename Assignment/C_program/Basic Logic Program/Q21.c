//Accept 2 numbers from user and swap 2 numbers with using 3rd variable and without using 3rd variable
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter The A :");
    scanf("%d",&a);
    printf("Enter The B :");
    scanf("%d",&b);
    printf("Before Swaping Number a=%d b=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After Swaping Number a=%d b=%d",a,b);

}

 //Q.1 Write a C program to accept two integers and check whether they are equal 
// or not 
#include <stdio.h>
int  main()
{
    int num1, num2;
    printf("Input the values for Number1 : ");
    scanf("%d", &num1);
     printf("Input the values for Number2 : ");
    scanf("%d", &num2);
    if (num1 == num2)
        printf("Number1 and Number2 are equal");
    else
        printf("Number1 and Number2 are not equal");
}

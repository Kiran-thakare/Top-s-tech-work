//  Write a C program to check whether a triangle can be formed with the given
// values for the angles.
#include <stdio.h>
int  main(){
    int anga, angb, angc, sum;
     printf("Input three angles of triangle : ");
    scanf("%d %d %d", &anga, &angb, &angc);
    sum = anga + angb + angc;
    if(sum == 180)
    {
        printf("The triangle is valid.\n");
    }
    else
    {
        printf("The triangle is not valid.\n");
    }
 }

//WAP to find the largest of three numbers.
#include<stdio.h>
int main() {
 int a, b, c;
 printf("Enter the value for a:");
 scanf("%d", &a);
 printf("Enter the value for b:");
 scanf("%d", &b);
 printf("Enter the value for c:");
 scanf("%d", &c);

 if ((a > b) && (a > c)) {
  printf("\n The Largest Number is a= %d", a);
 }

 else if (b > c) {
  printf("\n The Largest Number is b= %d", b);
 }

 else {
  printf("\n The Largest Number is c= %d", c);
 }
}

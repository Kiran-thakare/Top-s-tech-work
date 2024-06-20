//16. Calculate the Sum of Natural Numbers Using the While Loop
#include<stdio.h>
int sum(int n){
    if(n==0){
      return 1;
    }
    else{
      return n+sum(n-1);
    }

}
int main(){
 int num;
 printf("Enter number :");
 scanf("%d",&num);
 printf("The Sum Is:%d",sum(num));
}

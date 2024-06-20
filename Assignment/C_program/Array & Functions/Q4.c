//4. WAP to find factorial using recursion
#include<stdio.h>
int fact(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}
int main(){
    int num,res;
    printf("Enter Number ");
    scanf("%d",&num);
    res=fact(num);
    printf("The Factorial Of Given Number :%d",res);
}

//. Accept 2 numbers and find out its sum check it size
#include<stdio.h>
int main(){
    int a,b,sum;
    printf("Enter The No A:");
    scanf("%d",&a);
     printf("Enter The No B:");
    scanf("%d",&b);
    sum=a+b;
    printf("The Sum of No :%d",sum,sizeof(sum));
//     printf("\n The size:%d",sizeof(a));
//     printf("\n The size:%d",sizeof(b));
}

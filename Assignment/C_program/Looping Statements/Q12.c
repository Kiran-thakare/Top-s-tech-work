//Program of Armstrong Number in C Using For Loop & While Loop
#include<stdio.h>
int main(){
    int i,num,sum=0,rem,temp;
    printf("Enter A Number :");
    scanf("%d",&num);
    temp=num;
    // while(temp>0){
    //     rem=temp%10;
    //     sum+=rem*rem*rem;
    //     temp=temp/10;
    // }
    // if (num==sum)
    // {
    // printf("Number is Armstrong ");
    // }
    // else{
    //     printf("Number is Not Armstrong ");
    // }
    for(i=0;i<=num;i++){
         rem=temp%10;
         sum+=rem*rem*rem;
        temp=temp/10;
    }
    if (num==sum)
    {
    printf("Number is Armstrong ");
    }
    else{
        printf("Number is Not Armstrong ");
    }

}

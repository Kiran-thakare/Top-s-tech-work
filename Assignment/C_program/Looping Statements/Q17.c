//Calculate 5 numbers from user and calculate number of even and odd using of while loop
#include<stdio.h>
int main(){
int i,n=5,num;
int  ec=0;
int oc=0;
printf("Enter numbers:");
    while(i<n)
    {
    //printf("Enter Number :");
    scanf("%d",&num);

        if(num % 2==0){
            ec++;
        }
        else{
            oc++;
        }
        i++;
    }
    printf("even numbers:%d",ec);
    printf("odd numbers:%d",oc);

}

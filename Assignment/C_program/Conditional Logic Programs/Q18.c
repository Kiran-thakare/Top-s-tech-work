// Write a C program to calculate profit and loss on a transaction
#include<stdio.h>
int main(){
    int cprice, sprice,loss,profit;
    printf("\n Enter The cost Price :");
    scanf("%d",&cprice);
    printf("\n Enter The Selling Price :");
    scanf("%d",&sprice);
    if(cprice<sprice){
        profit=sprice-cprice;
        printf("\n The Profit Of :%d",profit);
    }
    else if (cprice>sprice){
        loss=sprice-cprice;
         printf("\n The Loss Of :%d",loss);
    }
    else{
        printf("\n The Loss Of The Market ");
    }
}

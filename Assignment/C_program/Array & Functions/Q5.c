// WAP to take two Array input from user and sort them in ascending or
// descending order as per user’s choice
#include<stdio.h>
int main(){
    int i,j,temp,arr[5];
    for(i=1;i<5;i++){
        printf("Enter Number %d:",i);
        scanf("%d",&arr[i]);
    }
    printf("\n Printing Array:\n");
    for(i=1;i<5;i++){
        printf("%d\t",arr[i]);
    }
    for(i=1;i<5;i++){
        for(j=1;j<i;j++){
            if(arr[i]<arr[j] || arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\n Acending Order Array:\n");
        for(i=1;i<5;i++){
            printf("%d\t",arr[i]);
        }
    printf("/n");
    printf("\n Decending  Order Array:\n");
        for(i=1;i<5;i++){
            printf("%d\t",arr[i]);
        }
}

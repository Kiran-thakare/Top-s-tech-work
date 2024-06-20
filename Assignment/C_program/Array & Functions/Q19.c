//WAP to take two Array input from user and sort them in ascending or
// descending order as per user’s choice
#include<stdio.h>
int main(){
    char choice;
    int arr1[5],arr2[5];
    int i,j,temp;

    printf("Select Method");
    printf("\n 1.Ascending order");
    printf("\n 2.Decending Order ");
     printf("\n Select Choice : ");
    scanf("%d",&choice);
    for(i=1;i<5;i++){
        printf("Enter Number %d:",i);
        scanf("%d",&arr1[i]);
    }
printf("\n Enter Second Array\n ");
    for(i=1;i<5;i++){
        printf("Enter Number %d:",i);
        scanf("%d",&arr2[i]);
    }
    switch(choice){
        case 1:
        printf("your choice is for ascending:");
              ascending(arr1,5);
              print_array(arr1,5);
         break;
    case 2:
         printf("your choice is for descending:");
         desc(arr1,5);
         print_array(arr1,5);
       break;

}
}
int ascending(int arr[],int size){
    int i,j,temp;
for(i=1;i<size;i++){
        for(j=1;j<i;j++){
            if(arr[i]<arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
   }
}
int desc(int arr[],int size){
    int i,j,temp;
  for(i=1;i<size;i++){
        for(j=1;j<i;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
     }
}
int print_array(int arr[],int size){
    for(int i=1;i<size;i++){
        printf("%d \t",arr[i]);
    }
}

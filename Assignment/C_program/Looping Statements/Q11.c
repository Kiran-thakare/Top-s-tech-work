//Accept 5 names from user at run time.
#include<stdio.h>
int main(){
    char name[5][20];
    int i,j,n;
   printf("Enter number of names:");
   scanf("%d",&n);
    for(i=0;i<n;i++){
       printf("Enter Name%d:",i+1);
       scanf("%s",&name[i]);
    }
     printf("\n You have Enterd names ");
   for(j=0;j<n;j++){
        printf("%s \n",name[j]);
   }
}


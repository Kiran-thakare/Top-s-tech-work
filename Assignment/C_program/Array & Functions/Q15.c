// Perform 2D matrix array
#include<stdio.h>
int main(){
    int r, c, row,col,arr1[20][20],arr2[20][20],sum[20][20],sub[20][20],mul[20][20];
    printf("Enter Size Of Row And Column");
    printf("\nEnter Row Value:");
    scanf("%d",&r);
    printf("Enter col");
    scanf("%d",&c);
    printf("\nEnter Value Of Array 1:-");
    for(row=0;row<r;row++){
        for(col=0;col<c;col++){
            scanf("%d",&arr1[row][col]);
        }
    }
     printf("\n Enter Value Of Array 2:");
      for(row=0;row<r;row++){
        for(col=0;col<c;col++){
            scanf("%d",&arr2[row][col]);
        }
    }
    printf("\n Printing Array 1:");
     for(row=0;row<r;row++){
        printf("\n");
        for(col=0;col<c;col++){
            printf("%d\t",arr1[row][col]);
        }
     }
    printf("\n Printing Array 2:");
     for(row=0;row<r;row++){
        printf("\n");
        for(col=0;col<c;col++){
            printf("%d\t ",arr2[row][col]);
        }
    }
    //printf("\n Multiplication Two Number :");
     for(row=0;row<r;row++){
        for(col=0;col<c;col++){
            mul[row][col]=0;
           for(int element=0;element<c;element++){
            mul[row][col] += arr1[row][element] * arr2[element][col];
        }
      }
    }
    printf("\n Multiplication Two Number :");
     for(row=0;row<r;row++){
        printf("\n");
        for(col=0;col<c;col++){
        printf("%d\t ",mul[row][col]);
        }
    }
}

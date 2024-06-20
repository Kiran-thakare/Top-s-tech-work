// WAP to make addition, Subtraction and multiplication of two matrix using
// 2-D Array
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
 //printf("\n Addition Two Number :");
     for(row=0;row<r;row++){
        printf("\n");
        for(col=0;col<c;col++){
            sum[row][col]=arr1[row][col]+arr2[row][col];

        }
    }
     printf("\n After Addition Two Number :");
     for(row=0;row<r;row++){
        printf("\n");
        for(col=0;col<c;col++){
        printf("%d\t ",sum[row][col]);
        }
    }
//printf("\n Subtraction Two Number :");
     for(row=0;row<r;row++){
        printf("\n");
        for(col=0;col<c;col++){
            sub[row][col]=arr1[row][col]-arr2[row][col];

        }
    }
     printf("\n After substraction Two Number :");
     for(row=0;row<r;row++){
        printf("\n");
        for(col=0;col<c;col++){
        printf("%d\t ",sub[row][col]);
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


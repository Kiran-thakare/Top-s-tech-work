// pattern 5:
// 1
// 23
// 456
// 78910
// 1112131415
#include<stdio.h>
int main(){
    int row,col,n=1;
    for(row=0;row<5;row++){
        for(col=1;col<=row+1;col++){
            printf("%d",n);
            n++;
        }
        printf(" \n ");
    }
}

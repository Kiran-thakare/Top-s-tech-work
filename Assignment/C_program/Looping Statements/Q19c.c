//Pattern : 3
//     *
//    ***
//   *****
//  *******
// *********
#include<stdio.h>
int main(){
    int row,col,space;
    for(row=0;row<=5;row++){
        for(space=5;space>row;space--){
            printf(" ");
        }
        for(col=0;col<2*row-1;col++){
            printf("*");
        }
        printf("\n");
    }
}

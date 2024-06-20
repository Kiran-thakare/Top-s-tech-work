//Pattern 2
// A
// BC
// DEF
// GHIJ
// KLMNO
#include<stdio.h>
int main(){
    int row,col;
    char ch='A';
    for(row=0;row<5;row++){
        for(col=0;col<=row;col++){
            printf("%c",ch);
            ch++;
        }
        printf("\n");
    }
}

//Spiral pattern
//  1       2       3       4       5       6       7       8       9       10
//  36     37      38      39      40      41      42      43      44      11
//  35     64      65      66      67      68      69      70      45      12
//  34     63      84      85      86      87      88      71      46      13
//  33     62      83      96      97      98      89      72      47      14
//  32     61      82      95      100     99      90      73      48      15
//  31     60      81      94      93      92      91      74      49      16
//  30     59      80      79      78      77      76      75      50      17
//  29     58      57      56      55      54      53      52      51      18
//  28     27      26      25      24      23      22      21      20      19
#include<stdio.h>
int main(){
    int size;
    printf("Enter Size :");
    scanf("%d",&size);
    int arr[size][size];
    int r1=0,c1=0,r2=size-1,c2=size-1,value=1;
    while(value<=size*size){
        for(int left=c1;left<=c2;left++){
            arr[r1][left]=value++;

        }
        for(int right=r1+1;right<=r2;right++){
            arr[right][c2]=value++;
        }
        for(int left=c2-1;left>=c1;left--){
            arr[r2][left]=value++;

        }
        for(int right=r2-1;right>=r1+1;right--){
            arr[right][c1]=value++;
        }
        r1++;
        c1++;
        r2--;
        c2--;
    }
    printf("printing Patterns:: \n");
    for(int left=0;left<size;left++){
        for(int right=0;right<size;right++){
            printf("%d\t",arr[left][right]);
        }
        printf("\n ");
    }
}

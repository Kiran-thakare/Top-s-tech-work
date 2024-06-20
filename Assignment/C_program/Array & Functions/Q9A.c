// Write a program of structure employee that provides the following
// a. information -print and display empno, empname, address
// andage
#include<stdio.h>
struct employee{
    char empname[20];
    char address[50];
    int empno;
    int empage;

}e1;

int main(){
  printf("Enter Employe Number :");
  scanf("%d",&e1.empno);
printf("Enter Employe Name :");
  scanf("%s",&e1.empname);
printf("Enter Employe Age  :");
  scanf("%d",&e1.empage);
printf("Enter Employe Adreess :");
  scanf("%s",&e1.address);

printf("\n Print Employe Details:");
printf("\n Employe Id Number :%d",e1.empno);
printf("\n Employe Name :%s",e1.empname);
printf("\n Emplye Age :%d",e1.empage);
printf("\n Employe Address:%s",e1.address);
}





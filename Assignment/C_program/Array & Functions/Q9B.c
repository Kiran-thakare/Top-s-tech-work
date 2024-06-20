// b. Write a program of structure for five employee that
// provides the following information -print and display
// empno, empname, address andage
#include<stdio.h>
struct employee{
    char empname[20];
    char address[50];
    int empno;
    int empage;

}e1;

int main(){
  for(int i=0;i<5;i++){
  printf("Enter Employe Number %d:",i+1);
  scanf("%d",&e1.empno);
printf("Enter Employe Name %d:",i+1);
  scanf("%s",&e1.empname);
printf("Enter Employe Age %d:",i+1);
  scanf("%d",&e1.empage);
printf("Enter Employe Adreess %d:",i+1);
  scanf("%s",&e1.address);
}
for(int i=0;i<5;i++){
printf("\n Print Employe Details:");
printf("\n Employe Id Number :%d",e1.empno);
printf("\n Employe Name :%s",e1.empname);
printf("\n Emplye Age :%d",e1.empage);
printf("\n Employe Address:%s",e1.address);
}
}

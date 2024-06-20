//WAP to show difference between Structure and Union.
#include<stdio.h>
struct employee{
    char empname[20];
    int empno;


}s1;
union student{

    char studname[20];
    int studno;


}u1;

int main(){
 /*Structure */
  printf("Enter Employe Number :");
  scanf("%d",&s1.empno);
printf("Enter Employe Name :");
  scanf("%s",&s1.empname);

/*Union Use */
 printf("Enter Student Roll Number :");
  scanf("%d",&u1.studno);
printf("Enter Student Name :");
  scanf("%s",&u1.studname);

/*Print Of Structure Progarm */
printf("\n Print Structure  Employe Details:");
printf("\n Employe Id Number :%d",s1.empno);
printf("\n Employe Name :%s",s1.empname);


/*Union print */
printf("\n Print union Student Details:");
printf("\n Student Roll Number Number :%d",u1.studno);
printf("\n Student Name :%s",u1.studname);
}

//  Write a C program to input basic salary of an employee and calculate its
// Gross salary according to following:
// Basic Salary <= 10000 : HRA = 20%, DA = 80%
// Basic Salary <= 20000 : HRA = 25%, DA = 90%
// Basic Salary > 20000 : HRA = 30%, DA = 95%

#include<stdio.h>
int main(){
    int basic,hra,da,Gross_Salary;
    printf("Enter The Basic Salary :");
    scanf("%d",&basic);
    if(basic<=10000){
        hra=basic*20/100;
        da=basic*80/100;
    }
    else if (basic<= 20000)
  	{
  		hra = basic * 25 / 100;
	  	da= basic* 90 / 100;
  	}
  	else
  	{
	   	hra = basic * 30/ 100;
	  	da= basic * 95 / 100;
    }
    Gross_Salary = basic+hra+da;
	printf("\n Gross Salary of this Employee  = %d", Gross_Salary);
}

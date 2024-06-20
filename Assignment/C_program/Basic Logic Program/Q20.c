// . Accept monthly salary from the user and deduct 10% insurance premium, 
// 10% loan installment find out of remaining salary. 
#include <stdio.h>
int main() {
    double salary, insurancePremium, loanInstallment, remainingSalary;
    printf("Enter your monthly salary: ");
    scanf("%lf", &salary);
    insurancePremium = 0.10 * salary;
    loanInstallment = 0.10 * salary;
    remainingSalary = salary - insurancePremium - loanInstallment;
    printf("Insurance Premium: %.2lf\n", insurancePremium);
    printf("Loan Installment: %.2lf\n", loanInstallment);
    printf("Remaining Salary: %.2lf\n", remainingSalary);
    return 0;
}
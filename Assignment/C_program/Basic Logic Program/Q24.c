//Accept 5 employees name and salary and count average and total salary
#include <stdio.h>
int main() {
    char employeeNames[5][50];
    double salaries[5];
    double totalSalary = 0.0;
    double averageSalary;
    for (int i = 0; i < 5; i++) {
        printf("Enter name of employee %d: ", i + 1);
        scanf("%s", employeeNames[i]);
        printf("Enter salary of %s: ", employeeNames[i]);
        scanf("%lf", &salaries[i]);
        totalSalary += salaries[i];
    }
    averageSalary = totalSalary / 5;
    printf("\nEmployee Details:\n");
    for (int i = 0; i < 5; i++) {
    printf("%s: %.2lf\n", employeeNames[i], salaries[i]);
    }
    printf("\nTotal Salary: %.2lf\n", totalSalary);
    printf("Average Salary: %.2lf\n", averageSalary);
    return 0;
}

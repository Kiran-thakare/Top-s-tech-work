//  Write a program in C to calculate and print the electricity bill of a given
// customer. The customer ID, name, and unit consumed by the user should
// be captured from the keyboard to display the total amount to be paid to the
// customer. The charge are as follow :
#include <stdio.h>
int main() {
    int customerID;
    char customerName[50];
    double unitConsumed, totalAmount;
    printf("Enter customer ID: ");
    scanf("%d", &customerID);
    printf("Enter customer name: ");
    scanf("%s", customerName);
    printf("Enter units consumed: ");
    scanf("%lf", &unitConsumed);
    if (unitConsumed <=350) {
        totalAmount = unitConsumed * 1.20;
    } else if (unitConsumed <= 600) {
        totalAmount = 350 * 1.20 + (unitConsumed - 350) * 1.50;
    } else if (unitConsumed <= 800) {
        totalAmount = 350 * 1.20 + 250 * 1.50 + (unitConsumed - 600) * 1.80;
    } else {
        totalAmount = 350 * 1.20 + 250 * 1.50 + 200 * 1.80 + (unitConsumed - 800) * 2.00;
    }
    printf("\nElectricity Bill\n");
    printf("Customer ID: %d\n", customerID);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %.2lf\n", unitConsumed);
    printf("Total Amount: %.2lf\n", totalAmount);
}

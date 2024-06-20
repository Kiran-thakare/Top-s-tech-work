#include <stdio.h>
int main() {
    double expenses[5];
    double total = 0.0;
    double average;
    printf("Enter 5 expenses:\n");
    for (int i = 0; i < 5; i++) {
        printf("Expense %d: ", i + 1);
        scanf("%lf", &expenses[i]);
        total += expenses[i];
    }
    average = total / 5;
    printf("Average expense: %.2lf\n", average);
    return 0;
}

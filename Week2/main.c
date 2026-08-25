#include <stdio.h>

int main(void) {
    double revenue, expenses, balance;

    printf("=========================================\n");
    printf("      MUNICIPAL BUDGET CALCULATOR\n");
    printf("=========================================\n\n");

    printf("Enter Total Revenue: $");
    scanf("%lf", &revenue);

    printf("Enter Total Expenses: $");
    scanf("%lf", &expenses);

    balance = revenue - expenses;

    printf("\n----------- BUDGET SUMMARY -------------\n");
    printf("Revenue:   $%.2f\n", revenue);
    printf("Expenses:  $%.2f\n", expenses);
    printf("Balance:   $%.2f\n", balance);
    printf("-----------------------------------------\n");

    if (balance < 0)
        printf("Status: DEFICIT\n");
    else if (balance == 0)
        printf("Status: BALANCED\n");
    else
        printf("Status: SURPLUS\n");

    return 0;
}
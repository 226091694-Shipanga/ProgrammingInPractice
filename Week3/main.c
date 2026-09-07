#include <stdio.h>

int main()
{
    float basicSalary, housing, transport, taxPercent;
    float grossSalary, tax, netSalary;

    printf("Enter Basic Salary: ");
    scanf("%f", &basicSalary);

    printf("Enter Housing Allowance: ");
    scanf("%f", &housing);

    printf("Enter Transport Allowance: ");
    scanf("%f", &transport);

    printf("Enter Tax (as a percentage, e.g. 15 for 15%%): ");
    scanf("%f", &taxPercent);

    grossSalary = basicSalary + housing + transport;
    tax = (taxPercent / 100) * grossSalary;
    netSalary = grossSalary - tax;

    printf("\nGross Salary: %.2f\n", grossSalary);
    printf("Tax Amount:   %.2f\n", tax);
    printf("Net Salary:   %.2f\n", netSalary);

    return 0;
}
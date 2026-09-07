#include <stdio.h>

int main()
{
    char name[50];
    float price, budget;
    int registrationStatus, documentsComplete;

    printf("Enter supplier name: ");
    scanf("%s", name);

    printf("Enter supplier price: ");
    scanf("%f", &price);

    printf("Enter available budget: ");
    scanf("%f", &budget);

    printf("Is registration valid? (1 = Yes, 0 = No): ");
    scanf("%d", &registrationStatus);

    printf("Are documents complete? (1 = Yes, 0 = No): ");
    scanf("%d", &documentsComplete);

    if (registrationStatus == 1 && documentsComplete == 1 && price <= budget)
    {
        printf("\nSupplier %s is QUALIFIED.\n", name);
    }
    else
    {
        printf("\nSupplier %s is DISQUALIFIED.\n", name);
    }

    return 0;
}
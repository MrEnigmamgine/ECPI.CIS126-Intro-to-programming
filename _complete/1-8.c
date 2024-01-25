// Joshua Mayes
// 1.8 GP
// 2024-01-25

#include <stdio.h>
int main()
{
    float taxrate, sales, salestax, totalsales;
    taxrate = 0.08;

    printf("Please enter the sales amount: ");
    scanf("%f", &sales);

    salestax = sales * taxrate;
    printf("The sales tax is %.2f \n", salestax);

    totalsales = sales + salestax;

    printf("The total sales, including the sales tax is %.2f.\n", totalsales);

    return 0;
}
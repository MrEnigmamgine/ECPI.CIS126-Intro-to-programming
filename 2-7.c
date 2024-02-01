// Joshua Mayes
// 2.7
// 2024-02-01

#include <stdio.h>
int main()
{
    int yearsOfService;

    printf("Enter number of years of employment service: ");
    scanf("%d", &yearsOfService);
    // Start high and work downward to avoid multiple true conditions.
    if (yearsOfService > 25)
    {
        printf("You receive a gold watch!\n");
    }
    else if (yearsOfService > 15)
    {
        printf("You receive a silver pen!\n");
    }
    else if (yearsOfService > 5)
    {
        printf("You receive an attractive pin!\n"); // Not an attractive pen, unfortunately.
    }
    else if (yearsOfService >= 0) // >= because 0 is a valid entry.
    {
        printf("You receive a pat on the back!\n");
    }
    else
    {
        printf("Invalid years of service. Please enter a positive number.\n");
    }
}
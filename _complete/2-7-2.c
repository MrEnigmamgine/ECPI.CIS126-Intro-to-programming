// Joshua Mayes
// 2.7
// 2024-02-01

#include <stdio.h>
int main()
{
    int yearsOfService;

    printf("Number of years of employment service: ");
    scanf("%d", &yearsOfService);

    switch (yearsOfService)
    {
    case 0 ... 5:
        printf("You receive a pat on the back!\n");
        break;
    case 6 ... 15:
        printf("You receive an attractive pin!\n");
        break;
    case 16 ... 25:
        printf("You receive a silver pen!\n");
        break;
    case 26 ... 100:
        printf("You receive a gold watch!\n");
        break;
    default:
        printf("Invalid years of service. Please enter a number between 0 and 100.\n");
        break;
    }

    return 0;
}

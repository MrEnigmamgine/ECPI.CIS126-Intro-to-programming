// Joshua Mayes
// 2.4
// 2024-01-31

#include <stdio.h>
int main()
{
    // Find the factors of a number.
    int number, count;

    // prompt
    printf("Enter an integer: ");
    scanf("%i", &number);

    printf("The factors of %d are:\n", number);
    for (count = 1; count <= number; count++)
    {
        if (number % count == 0) // Evenly divisible means it's a factor
        {
            printf("%i,\n", count); // No (easy) dynamic array sizes in C, so just print instead.
        }
    }

    return 0;
}
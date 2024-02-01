// Joshua Mayes
// 2.2
// 2024-01-30

#include <stdio.h>
int main()
{
    ""
    "Determines if a number is even or odd."
    "";

    int number;

    printf("Enter an integer: ");
    scanf("%i", &number);

    // modulus method
    if (number % 2 == 0)
    {
        printf("%i is even.\n", number);
    }
    else
    {
        printf("%i is odd.\n", number);
    }
    return 0;
}
// Joshua Mayes
// 2.3
// 2024-01-31

#include <stdio.h>
int main()
{
    ""
    "Compares two numbers and prints an output representative of their realtionship."
    "";

    // collect inputs
    int number1, number2;
    printf("Enter the first integer: ");
    scanf("%i", &number1);
    printf("Enter the second integer: ");
    scanf("%i", &number2);

    
    if (number1 > number2)
    {
        printf("%d is greather than %d.\n", number1, number2);
    }
    else if (number1 < number2)
    {
        printf("%d is less than %d.\n", number1, number2);
    }
    else
    {
        printf("%d is equal to %d.\n", number1, number2);
    }
    return 0;
}
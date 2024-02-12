// Joshua Mayes
// 3-4
// 2024-02-10

#include <stdio.h>
#include <math.h> // need to include the -lm flag for gcc to include the library.

int main()
{
    // Get input number
    float number;
    printf("Enter a number: ");
    scanf("%f", &number);

    printf("The square root of %.0f is: %.2f\n", number, sqrt(number));
    printf("The square root of %.0f is: %.2f\n", number, cbrt(number));

    return 0;
}
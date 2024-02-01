// Joshua Mayes
// 2.9
// 2024-02-01
#include <stdio.h>
int main()
{
    const int correctPasscode = 11862; // constant prevents tampering
    int userPasscode;                  // don't need char since passcode is just number
    int attempts = 3;

    while (attempts > 0)
    {
        printf("Enter the passcode: ");
        scanf("%d", &userPasscode);

        if (userPasscode == correctPasscode)
        {
            printf("Access granted!\n");
            break;
        }
        else
        {
            attempts--; // count down before print, otherwise output is misleading
            printf("Incorrect passcode. %d attempts remaining.\n", attempts);

            if (attempts == 0)
            {
                printf("Access denied.\n");
            }
        }
    }

    return 0;
}

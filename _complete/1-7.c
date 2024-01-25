// Joshua Mayes
// 1.7 GP
// 2024-01-25

#include <stdio.h>
int main()
{

    int weekly, yearly;

    printf("What is your annual pay? \n");
    scanf("%d", &yearly);

    weekly = yearly / 52;
    printf("Your weekly pay is : %d\n", weekly);

    if (weekly > 1000)
    {
        printf("You are doing well. Spend your money wisely!\n");
    }

    return 0;
}
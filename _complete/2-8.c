// Joshua Mayes
// 2.8
// 2024-02-01

#include <stdio.h>
int main()
{
    int total = 0;
    for (int i = 100; i <= 200; i++)
    {
        total += i;
    }
    printf("The total is %d\n", total);
    return 0;
}
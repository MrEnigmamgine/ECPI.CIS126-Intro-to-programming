// Joshua Mayes
// 2.6
// 2024-02-01

#include <stdio.h>
int main()
{

    char ans; // user response

    do
    {
        printf("C is fun!\n");
        printf("Do you want to see the message again (Y/N): ");
        scanf(" %c", &ans);
    } while (ans == 'Y' || ans == 'y'); //Must bing single quotes (''), double quotes break the char datatype ("")

    printf("\nThat's all for now!\n");

    return 0;
}
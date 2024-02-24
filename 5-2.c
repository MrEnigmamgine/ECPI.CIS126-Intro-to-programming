// Joshua Mayes
// 5-1
// 2024-02-22

#include <stdio.h>
#include <string.h>

int main(void)
{
    char buff[8];
    int pass = 0;

    printf("\nEnter the password: \n");
    fgets(buff, 9, stdin);
    puts(buff);

    if (strcmp(buff, "password") == 0)
    {
        puts("\nCorrect Password");
        pass = 1;
    }
    else
    {
        puts("\nWrong password");
    }

    if (pass == 1)
    {
        printf("\nRoot privileges given to the user\n");
    }
}
// Joshua Mayes
// 4-3
// 2024-02-14

#include <stdio.h>

void main(){
    // Different ways to declare a string.
    char name[20];
    char prompt[] = "Enter your name: ";
    char prompt1[5] = {'Y','o','u','r','\0'};

    puts(prompt);           //puts(): put string (appends a newline at end of string)
    // gets(name);             //gets(): get string (apparently is discouraged due to security risks)
    fgets(name, 20, stdin); //using fgets becuase my GCC version complains about the gets() function

    printf("%s", prompt1);  // "%s":  format string for strings
    printf(" name is: %s",name); //lack of '\n' means that this is concatenated with previous line.

}
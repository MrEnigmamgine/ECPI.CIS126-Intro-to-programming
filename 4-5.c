// Joshua Mayes
// 4-5
// 2024-02-17

#include <stdio.h>

void main(){
    // Message requirement
    char message[] = "My Friends Ages Program";
    puts(message);

    //array assignments
    int ages[4];
    ages[0] = 25;
    ages[1] = 27;
    ages[2] = 24;
    ages[3] = 26;

     // Display each age using a for loop
    for (int i = 0; i < 4; i++) {
        printf("Friend %d's age is: %d\n", i + 1, ages[i]);
    }   
}
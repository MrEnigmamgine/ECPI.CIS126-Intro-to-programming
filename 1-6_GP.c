// Joshua Mayes
// 1.6 GP
// 01-23-2024

#include<stdio.h> //include printf() and scanf() functions
int main(){
    // declare variables
    char CharacterValue;    // character
    float FloatValue;       // decimal

    //inputs
    printf("Please enter a character: ");   //prompt
    scanf("%c", &CharacterValue);           // Scan Formatted String. Reads from stdin. (format_string , where_to_put_scanned_data). https://www.geeksforgeeks.org/scanf-in-c/
    printf("Please enter a float value (Decimals): ");
    scanf("%f", &FloatValue);               // Ampersand (&) is the address operator. Store data at this address.

    printf("The character you entered is: " &CharacterValue &" and float value you entered is: " &FloatValue);

    return 0;
}
// Joshua Mayes
// 3-7
// 2024-02-12

#include <stdio.h>
#include <ctype.h>

void main(){
    char letter;

    puts("Check if a character is upper or lower case.\nEnter a letter to test: ");
    scanf("%c", &letter);
    
    if(islower(letter)){
        puts("The character is lower-case.");
    }else if(isupper(letter)){
        puts("The character is upper-case.");
    }else{
        puts("The character is neither upper-case or lower case.");
    }
}
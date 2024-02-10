// Joshua Mayes
// 3.1
// 2024-02-09
#include <stdio.h>

//Prototype to inform compiler of the function but define later
void displayMessage(void);

int main()
{
    //Collect input
    int num1, num2, addition;
    displayMessage(); //function call
    scanf("%d", &num1);
    scanf("%d", &num2);

    addition = num1 + num2;
    printf("The numbers added together are: %d\n",addition);

    return 0;
}

void displayMessage(void){
    printf("Welcome to the Addition Program.\n");
    printf("Enter two numbers to be added\n");
    return;
}
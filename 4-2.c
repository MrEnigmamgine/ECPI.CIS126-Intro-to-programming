// Joshua Mayes
// 4-2
// 2024-02-14

#include <stdio.h>

void main(){
    int counter;

    // Initial array declare and display
    int values[3] = {3, 10, 6};
    for( counter = 0; counter <= 2; counter ++) {
        printf("The value in the element %d of the initilized array is: %d \n", counter, values[counter]);
    }
    printf("\n");

    // Edit values and display again
    values[0] = 15;
    values[1] = 18;
    values[2] = 19;
    printf("\n\n");
    for( counter = 0; counter <= 2; counter ++) {
        printf("The value in the element %d of the initilized array is: %d \n", counter, values[counter]);
    }

    // Collect user input into an array
    puts("\n\nEnter three numbers.");
    for( counter = 0; counter <= 2; counter ++) {
        printf("Number %d: ", counter+1);
        scanf("%d", &values[counter]);
    }
    // Display again
    printf("\n\n");
    for( counter = 0; counter <= 2; counter ++) {
        printf("The value in the element %d of the initilized array is: %d \n", counter, values[counter]);
    }
}
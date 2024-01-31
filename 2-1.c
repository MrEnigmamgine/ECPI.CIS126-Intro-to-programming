// Joshua Mayes
// 2.1
// 2024-01-30

#include <stdio.h>
int main(){

    int grade, average;
    int count = 0;
    int total = 0;

    // initial prompt
    printf("Enter the student's numeric grade. (Integer 0-100): ");
    scanf("%i", &grade);

    // continue to collect grades for averaging
    do{
        total += grade;
        count ++;
        printf("Enter the student's numeric grade. (Integer 0-100, -1 to exit): ");
        scanf("%i", &grade);
    } while (grade >= 0);

    // calculate average of grades entered
    average = total/count;
    printf("The average of %i grades is: %i.\n", count, average);

    return 0;
}
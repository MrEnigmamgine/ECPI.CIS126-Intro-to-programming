// Joshua Mayes
// 1.9
// 2024-01-25

#include <stdio.h>
int main()
{
    float grade1, grade2, grade3, average;

    // Hardcoding the grades
    grade1 = 84;
    grade2 = 98;
    grade3 = 73;

    // compute the mean
    average = (grade1 + grade2 + grade3) / 3;
    printf("The average grade is: %.2f\n", average);

    // Add a pass checker
    if (average > 65)
    {
        printf("Excellent, you passed this course!\n");
    }

    return 0;
}
// Joshua Mayes
// 2.1
// 2024-01-30

#include <stdio.h>
int main(){
    int grade = 0;
    int count = -1;
    int total = 0;
    while(grade >=0){
        total += grade;
        count ++;
        printf("Enter the student's numeric grade. (Integer 0-100, -1 to exit): ");
        scanf("%i", &grade);
    };

    // calculate average of grades entered
    int average = total/count;
    printf("The average of %i grades is: %i.\n", count, average);

    return 0;
}
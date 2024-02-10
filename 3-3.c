// Joshua Mayes
// 3.3
// 2024-02-09
#include <stdio.h>

//prototypes
int isLeapYear(int year);

int main(){
    int year;
    // prompt / input
    printf("Enter a year: \n");
    scanf("%d", &year);

    if(isLeapYear(year) == 1){ //function call
        printf("\n%d is a leap year.\n",year);
    } else {
        printf("\n%d is not a leap year.\n",year);
    }
    
    return 0;
}

int isLeapYear(int year){
    // there's no reason to dedicate memory to a new variable when we can pass the comparisons directly
    return (
        year % 4 == 0 && // Year divisible by 4, AND
        // for years divisible by 100 check if divisible by 400
        (year % 100 != 0 || // Using exclusionary logic this block will only evaluate false when..
         year % 400 == 0)   // ..a century is not divisible by 400, which violates the AND above.
    );
}
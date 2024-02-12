// Joshua Mayes
// 3-6
// 2024-02-10

#include <stdio.h>

int getAge(){
    int dogAge;
    puts("What is your dog's age, in human years? ");
    scanf("%d", &dogAge);
    return dogAge;
}
int toDogYears(int years){
    int dogYears = years * 7;
    return dogYears;
}
void main(){
    int calculation = toDogYears(getAge());
    printf("That's %d dog-years!\n", calculation);
    puts("End of Program.");
}
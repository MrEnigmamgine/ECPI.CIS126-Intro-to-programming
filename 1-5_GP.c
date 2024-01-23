// Joshua Mayes
// 1.5 GP
// 01-23-2024

#include<stdio.h>
int main(){
    //"product" instead of "multiply" because variables should be nouns
    int num1,num2,product; 

    printf("Enter two numbers: ");
    scanf("%d", &num1);
    scanf("%d", &num2);

    product = num1 * num2;

    printf("The numbers multiplied together are %d", product);

    return 0;
}
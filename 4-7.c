// Joshua Mayes
// 4-7
// 2024-02-17

#include <stdio.h>
#include <string.h>

void main(){
    // As string
    char uni[] = "University";
    // As array
    char ecpi[] = {'E','C','P','I','\0'};

    printf("%s %s\n", ecpi, uni);

    // For some reason %d doesn't work
    printf("String \"%s\" is %zu elements long.\n", ecpi, strlen(ecpi));
    printf("String \"%s\" is %zu elements long.\n", uni, strlen(uni));

}
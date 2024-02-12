// Joshua Mayes
// 3-5
// 2024-02-10

#include <stdio.h>
#include <string.h>

int main(){

    char movie[30]; //No strings in C, just character arrays. And you have to predict the size of the array.

    //Get some text to work with.
    puts("What is your favorite movie?");
    gets(movie);

    printf("\nThere are %d characters, including spaces, in your movie title.\n", strlen(movie)); //strlen = length of string

    return 0;
}
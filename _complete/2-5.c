// Joshua Mayes
// 2.5
// 2024-01-31

#include <stdio.h>
int main(){
    int max = 5; //number of iterations
    int count = 1; //start at 1 so prompting is pretty
    float total = 0;
    float temp, average;

    //prompt
    printf("Please enter %d temperatures.\n",max);
    //collect and accumulate temps
    while(count <= max){
        printf("Temperature %d: ",count); //prompt each time
        scanf("%f", &temp);
        total += temp;
        count ++;
    };
    count --; //pretend we didn't start at 1
    average = total/count;
    printf("The average of the %d temperatures is: %2.f°\n",count,average);

    return 0;
}
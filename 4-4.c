// Joshua Mayes
// 4-4
// 2024-02-14

#include <stdio.h>

//prototypes
float averagescores(float scores[5]);

void main() {
  char name[] = "ECPI University";
  float scores[5] = {78.7, 98.4, 83.7, 85.3, 97.2};
  float result;

  result = averagescores(scores);
  printf("\nAt %s, your class average is: %.2f.\n", name, result);
}

float averagescores(float scores[5]) {
  float average = 0.0;
  float total = 0.0;
  int counter;

  for (counter = 0; counter < 5; counter++) {
    printf("The score in element %d is: %.2f\n", counter, scores[counter]);
    total += scores[counter];
  }

  printf("Total = %.2f\n", total);

  average = total / 5;

  return average;
}

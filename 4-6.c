// Joshua Mayes
// 4-6
// 2024-02-17

#include <stdio.h>
int holes = 9; // Number of holes stored in (global?) variable

int calculate_score(int scores[]){
    int total = 0;
    for(int i = 0; i < holes; i++){
        total += scores[i];
    }
    return total;
}

void main(){
    
    // Get scores
    int scores[holes];
    for(int i = 0; i < holes; i++){
        printf("Enter score for hole %d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    // Calculate total score
    int total_score = calculate_score(scores);

    // Display scores and total
    printf("\nHole scores:\n");
    for (int i = 0; i < holes; i++) {
        printf("  Hole %d: %d\n", i + 1, scores[i]);
    }
    printf("\nTotal score: %d\n", total_score);

}
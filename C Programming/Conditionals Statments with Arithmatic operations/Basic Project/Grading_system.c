#include <stdio.h>

int main() {
    // Declare variables
    float score;

    // Input the score from the user
    printf("Enter your score: ");
    scanf("%f", &score);

    // Check and display the grade based on the score
    if (score >= 90) {
        printf("Grade: A\n");
    } else if (score >= 80) {
        printf("Grade: B\n");
    } else if (score >= 70) {
        printf("Grade: C\n");
    } else if (score >= 60) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F\n");
    }

    return 0;
}
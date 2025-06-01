#include <stdio.h>

int main() {
    int birthYear, currentYear, age;

    printf("Enter your birth year: ");
    scanf("%d", &birthYear);
    printf("Enter the current year: ");
    scanf("%d", &currentYear);

    age = currentYear - birthYear;

    printf("Your age is: %d\n", age);

    if (age >= 18)
        printf("You are eligible to vote.\n");
    else
        printf("You are not eligible to vote.\n");

    return 0;
}

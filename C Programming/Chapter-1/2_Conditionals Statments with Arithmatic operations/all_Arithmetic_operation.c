#include <stdio.h>

int main() {
    int a, b;
    
    // Input from user
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    
    // Arithmetic operations
    printf("\n--- Arithmetic Operations ---\n");
    printf("Addition: %d + %d = %d\n", a, b, a + b);
    printf("Subtraction: %d - %d = %d\n", a, b, a - b);
    printf("Multiplication: %d * %d = %d\n", a, b, a * b);
    
    // Check for division by zero
    if (b != 0) {
        printf("Division: %d / %d = %.2f\n", a, b, (float)a / b);
        printf("Modulus: %d %% %d = %d\n", a, b, a % b);
    } else {
        printf("Division and Modulus: Cannot divide by zero.\n");
    }

    return 0;
}

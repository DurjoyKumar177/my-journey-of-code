#include <stdio.h>

int main() {
    float amount, discount, total;

    printf("Enter purchase amount: ");
    scanf("%f", &amount);

    if (amount >= 1000)
        discount = amount * 0.10;
    else if (amount >= 500)
        discount = amount * 0.05;
    else
        discount = 0;

    total = amount - discount;

    printf("Discount: %.2f\n", discount);
    printf("Total Payable Amount: %.2f\n", total);

    return 0;
}

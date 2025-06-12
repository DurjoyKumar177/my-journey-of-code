// This program uses a for loop to print numbers from 1 to 10

#include <stdio.h>

int main()
{
    // loop variable
    int i;

    // for loop
    for (i = 1; i <= 10; i = i + 1) //first is initialization, second is condition, third is increment
    {
        // body of the loop
        printf("%d\n", i);
    }
    // after the loop ends
    return 0;
}

// This program uses a do while loop to print numbers from 1 to 10

//we can use a do while loop to execute a block of code at least once before checking the condition. it first encrement then check the condition.
#include <stdio.h>

int main()
{
    int i = 1;
    // do while loop
    do
    {
        printf("%d\n", i);
        i = i + 1; // increment
    }
    while (i <= 10); //condition check
    // the loop will continue until i is less than or equal to 10
    return 0;
}

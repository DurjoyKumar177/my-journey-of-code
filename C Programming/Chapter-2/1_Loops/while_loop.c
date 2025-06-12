
 //This program uses a while loop to print numbers from 1 to 10

#include <stdio.h>
int main()
{
    int i = 1;
    // i is initialized to 1
    // the loop will continue until i is less than or equal to 10
    // after each iteration, i will be incremented by 1
    // it is similar to the for loop in the previous example

    printf("Printing numbers from 1 to 10 using a while loop:\n");

    while(i<=10) // condition to check if i is less than or equal to 10
{
    printf("%d\n", i);
    i = i + 1; // increment i by 1 after each iteration
}
    
    return 0;
}



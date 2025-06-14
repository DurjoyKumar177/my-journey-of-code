#include<stdio.h>
int main()
{
    int ar[10]; //declaring an array of size 10
    // initializing the array with values
    ar[0] = 1;
    ar[1] = 2;
    ar[2] = 3;
    ar[3] = 4;
    ar[4] = 5;

    // printing the values of the array
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", ar[i]);
    }
    printf("\n");
    return 0;
}
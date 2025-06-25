#include<stdio.h>

int main()
{
    int arr[10]={0};//here zero initailize all value as 0;but it only work in 0 not other value
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n\n ");
    //update value
    arr[5]=48;
    arr[2]=16;
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\n\nNew initailization in one characture\n");

     int Ar[10]={5};//here ar except 5 is set as 0;
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",Ar[i]);
    }
    printf("\n ");
    //update value 2
    Ar[2]=88;
    Ar[3]=66;
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",Ar[i]);
    }
     
    return 0;
}
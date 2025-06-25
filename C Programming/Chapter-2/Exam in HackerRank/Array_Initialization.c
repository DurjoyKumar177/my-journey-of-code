#include<stdio.h>

int main()
{
    int arr[5]={23,543,64,34,23};//array index start from 0 and end at 4
    printf("%d\n",arr[0]);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",arr[i]);
    }
     
    return 0;
}
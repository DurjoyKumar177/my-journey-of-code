#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }

     for (int i = 0; i < 5; i++)
    {
        printf("%d ",arr[i]);
    }
     
    return 0;
}
#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&ar[i]);
    }

    int count[10000]={0};
     for (int i = 0; i < n; i++)
    {
        int value=ar[i];
        count[value]++;//count[ar[i]]++;same as that 
    }
    for (int i = 0; i < n; i++)
    {
        int value=ar[i];
        printf("%d-- %d\n",ar[i],count[value]);
    }
     
    return 0;
}
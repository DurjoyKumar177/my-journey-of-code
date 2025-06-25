#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    char ar[n]; 
    for (int i = 0; i < n; i++)//number of character or value of n must be same,
    {
        scanf("%c",&ar[i]);//no space allow here
    }
    for (int i = 0; i < n; i++)
    {
        printf("%c",ar[i]);
    }
    
    
    return 0;
}
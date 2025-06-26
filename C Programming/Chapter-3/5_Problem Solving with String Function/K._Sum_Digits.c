#include<stdio.h>

int main()
{
    int n;
    scanf("%d ",&n);
    char ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%c",&ar[i]);
    }

    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum=sum+(ar[i]-'0');
    }

    printf("%d",sum);
    
    
    return 0;
}
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
    int div2=0,div3=0;
    for(int i=0; i<n;i++)
    {
        if(ar[i]%2==0)
        div2++;
        else if(ar[i]%3==0)
        div3++;
    }

    printf("%d %d",div2,div3);
    
    return 0;
}
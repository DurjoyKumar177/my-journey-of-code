#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
     int n;
    scanf("%d",&n);

    int ar[n];
    for (int i = 0; i < n; i++)
    {
       scanf("%d",&ar[i]);
    }
    int m;
    scanf("%d",&m);

    int match=0;
    for (int i = 0; i < n; i++)
    {
       if(ar[i]==m)
       {
        match++;
        break;
       }
    }
    if(match==1)
    printf("YES\n");

    else  
    printf("NO\n");

    }
    
    return 0;
}
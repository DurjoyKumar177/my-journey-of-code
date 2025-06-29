#include<stdio.h>

int main()
{
    int n,s,k;
    scanf("%d",&n);
    s=n-1;
    k=1;
    for (int i = 0; i < 2*n; i++)
    {
        for (int j =0; j<s; j++)
        {
            printf(" ");
        }
        for (int j =0; j<k ; j++)
        {
            printf("*");
        }
        printf("\n");
        if(i<=n-2)
        {
        s--;
        k=k+2;
        }
        else if(i==(n-1))
        {
            s=0;
            k=2*n-1;
        }
        else
        {
            s++;
            k=k-2;
        }
        
    }
    return 0;
}
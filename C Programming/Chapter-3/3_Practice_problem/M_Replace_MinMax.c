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
    int max=ar[0];
    int min=ar[0];
    for (int i = 0; i < n; i++)
    {
        if (max<ar[i])
        {
            max=ar[i];
        }
        else if(min>ar[i])
        {
            min=ar[i];
        }
    }  

    for (int i = 0; i < n; i++)
    {
        if(ar[i]==max)
        ar[i]=min;
        else if(ar[i]==min)
        ar[i]=max;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ",ar[i]);
    }
    
    
    return 0;
}
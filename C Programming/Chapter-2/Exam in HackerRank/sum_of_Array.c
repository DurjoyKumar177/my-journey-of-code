#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&ar[i]);
        //sum=sum+ar[i];//also written as sum+=ar[i];
    }
    
//int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=ar[i];//sum=sum+ar[i];
    }
    printf("%d",sum);
    
     
    return 0;
}
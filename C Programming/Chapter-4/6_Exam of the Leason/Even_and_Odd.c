#include<stdio.h>

void odd_even(int *ar,int n)
{
    int even=0,odd=0;
    for(int i=0; i<n;i++)
    {
        if(ar[i] % 2 ==0)
        even++;

        else 
        odd++;
    } 
    
    printf("%d %d",even,odd);   
} 

int main()
{
    int n;
    scanf("%d",&n);

    int ar[n];
    for(int i=0; i<n;i++)
    {
        scanf("%d",&ar[i]);
    } 
    odd_even(ar,n);

    return 0;
}
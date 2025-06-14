#include<stdio.h>
int main()
{
    int n; // size of the array
    scanf("%d",&n); // input the size of the array
    int ar[n]; // declaring an array of size n
    
    for(int i=0;i<n;i++) // input the elements of the array
    {
        scanf("%d",&ar[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+ar[i];
    }
    printf("%d",sum);
    return 0;
}
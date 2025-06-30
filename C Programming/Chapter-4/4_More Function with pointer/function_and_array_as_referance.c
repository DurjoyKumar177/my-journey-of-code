#include<stdio.h>

void fun(char *ar,int n)
{
    ar[0]=500;
} 

int main()
{
    int ar[5]={10,20,30,40,50};
    fun(ar,5);
    for(int i=0;i<5;i++)
    {
        printf("%d",ar[i]);
    } 
    return 0;
}
// so array is work ar referance becouse array is a pointer and it works always as referance 
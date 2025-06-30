#include<stdio.h>
void fun(int* p)
{
    *p=*p+10;
}

int main()
{
    int x=10;
    printf("value before intering function: %d\n",x);
    fun(&x);
    printf("value after function: %d",x);
    return 0;
}
#include<stdio.h>
void fun(int x)
{
    printf("value of x in function:%d\n",x+10);
}

int main()
{
    int x; 
    x=10;
    fun(x);

    printf("value of x :%d",x);

    return 0;
}
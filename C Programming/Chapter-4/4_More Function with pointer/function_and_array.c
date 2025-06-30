#include<stdio.h>
#include<string.h>

void fun(char *ar)//fun(char ar[])are also used here
{
    printf("%d",strlen(ar));
}

int main()
{
    char ar[20]="Hello_World";
    fun(ar);
    return 0;
}
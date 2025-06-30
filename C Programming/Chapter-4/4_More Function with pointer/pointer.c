#include<stdio.h>

int main()
{
    int x=100;
    int *ptr= &x; //declear of pointer;
    printf("x ar address: %p\n",&x);
    printf("ptr ar value: %p\n",ptr);
    printf("ptr ar address: %p\n",&ptr);
    printf("ptr Dereferance: %d\n",*ptr);//derefarence the pointer to get value of x;
    printf("Size of pointer is: %d\n",sizeof(ptr));//way to find the size or memory space of any veriable;

    *ptr=200;
    printf("new x ar value: %d\n",x);
    printf("ptr Dereferance: %d\n",*ptr);
    return 0;
}
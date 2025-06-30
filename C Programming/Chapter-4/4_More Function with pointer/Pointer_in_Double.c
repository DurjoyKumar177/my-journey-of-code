#include<stdio.h>

int main()
{
    double x=5.26;
    double * ptr=&x;
    printf("x ar address: %p\n",&x);
    printf("ptr ar value: %p\n",ptr);
    printf("x ar value using ptr: %lf\n",*ptr);
    printf("pointer size %d\n",sizeof(ptr));
    int *ptr2=ptr;//adding new veriable;
     printf("x ar value using ptr2: %lf\n",*ptr2);

    return 0;
}
#include<stdio.h>

int main()
{
    int n;
    int a,b;
    scanf("%d",&n);
    a=n/10;
    b=n%10;
    printf("%d %d",b,(b%a));
    if((a%b)==0 || (b%a)==0)
    printf("YES");
    

    else
    printf("NO");

    return 0;
}

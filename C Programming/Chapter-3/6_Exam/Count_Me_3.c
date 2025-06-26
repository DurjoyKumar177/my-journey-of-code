#include<stdio.h>
#include<string.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char a[10000];
        scanf("%s",a);
        int small=0,capital=0,degit=0;
        for(int i=0;i<strlen(a);i++)
        {
            if(a[i]>='a' && a[i]<='z')
            small++;

            else if(a[i]>='A' && a[i]<='Z')
            capital++;

            else if(a[i]>='0' && a[i]<='9')
            degit++;
        }

        printf("%d %d %d\n",capital,small,degit);
    }
    return 0;
}
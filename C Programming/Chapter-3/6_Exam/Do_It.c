#include<stdio.h>

int main()
{
    int k,m;
    scanf("%d %d",&k,&m);
    for (int i = 1; i <=k; i++)
    {
        for (int j = 1; j <=m; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
        
    }
    
    return 0;
}
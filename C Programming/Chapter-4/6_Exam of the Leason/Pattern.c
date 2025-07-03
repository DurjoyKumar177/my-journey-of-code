#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int s =n-1;
    int h=1;
    for (int i = 1; i <= (2*n-1); i++)
    {
        if(i%2!=0)
            {
            for (int j = 0; j < s; j++)
                {
                   printf(" ");
                }
            for (int j = 0; j < h; j++)
                {
                    printf("#");
                }
                printf("\n");

            if(i<n)
                {
                    s--;
                    h+=2;
                }
        else
            {
                s++;
                h=h-2;
            }
        }


      else
        {
            for (int j = 0; j < s; j++)
            {
               printf(" ");
            }
            for (int j = 0; j < h; j++)
            {
                printf("-");
            }

            printf("\n");

            if(i<n)
                {
                    s--;
                    h+=2;
                }
        else
            {
                s++;
                h=h-2;
            }
        }


    }

    return 0;
}

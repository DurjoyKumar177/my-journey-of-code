#include<stdio.h>
#include<string.h>

int main()
{
    char S[100000];
    scanf("%s",S);
    int cnt=0;
    for (int i = 0; i < strlen(S); i++)
    {
       if(S[i]=='a' || S[i]=='e'|| S[i]=='i'|| S[i]=='o'|| S[i]=='u' )
       {
        continue;
       }
       else
       {
        cnt++;
       }
    }

    printf("%d",cnt);
    
    return 0;
}
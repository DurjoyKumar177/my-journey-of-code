#include<stdio.h>
#include<string.h>

int main()
{
    char s[1000];
    scanf("%s",s);

    int cnt[26]={0};
    for (int i = 0; i < strlen(s); i++)
    {
        int value=s[i]-'a';//for optaing character value a=0,b=1,c=3 etc.
        cnt[value]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if(cnt[i]!=0)
        printf("%c - %d\n",i+'a',cnt[i]);
    }

    return 0;
}
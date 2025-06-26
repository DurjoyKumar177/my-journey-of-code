#include<stdio.h>
#include<string.h>

int main()
{
    char s[10000];
    scanf("%s",s);
    int cnt[26]={0};
for(int i=0;i<=strlen(s);i++)   
{
    if(s[i]>='a'&& s[i]<='z')
    cnt[s[i]-'a']++;
}
for (int i = 0; i < 26; i++)
{
    if(cnt[i]>0)
    printf("%c - %d\n", 'a' + i, cnt[i]);
}


    return 0;
}
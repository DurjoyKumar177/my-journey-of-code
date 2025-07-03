#include<stdio.h>
#include<string.h>

int is_palindrome(char ar[])
{
    int n=strlen(ar)-1;
    int cnt=0;
    for(int i=0,j=n;i<=j;i++,j-- )
    {
        if(ar[i]!=ar[j])
        {
            cnt=1;
            break;
        }

    }
   // printf(cnt ? "Not Palindrome" : "Palindrome");
   return cnt;
}
int main()
{
    char ar[1001];
    scanf("%s",ar);

    int cnt=is_palindrome(ar);
    printf(cnt ? "Not Palindrome" : "Palindrome");
    return 0;
}
#include<string.h>
#include<stdio.h>
int main()
{
    int n,s[100],l,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",s);
        l=strlen(s);
        if(l>10)
            printf("%c%d%c",s[0],l-2,s[l-1]);
        else
            printf("%s",s);
    }
    return 0;
}
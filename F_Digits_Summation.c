#include<stdio.h>
#include<string.h>

int main()
{
    char a[19],b[19];
    scanf("%s %s",a,b);

    int len1 = strlen(a);
    int len2 = strlen(b);

    //printf("%d %d\n",len1,len2);

    int ans = (a[len1-1]-'0')+(b[len2-1]-'0');

    printf("%d\n", ans);

    return 0;
}
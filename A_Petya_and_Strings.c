#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    int n;
    char a[101],b[101];
    scanf("%s", &a);
    scanf("%s", &b);

    for(int i=0; a[i]!='\0'; i++)
    {
       a[i]=tolower(a[i]);
    }

    for(int i=0; b[i]!='\0'; i++)
    {
       b[i]=tolower(b[i]);
    }

    n=strcmp(a,b);

    if(n>0)
    {
        printf("1\n");
    }
    else if(n<0)
    {
        printf("-1\n");
    }
    else
    {
        printf("0\n");
    }

    return 0;
}
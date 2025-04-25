#include<stdio.h>
#include<string.h>

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a[100000];
    
    for(int i=1; i<=n; i++)
    {
        scanf("%d", &a[i]);
    }

    int fre[m];

    for(int i=1; i<=m; i++)
    {
        fre[i]=0;
    }

    for(int i=1; i<=n; i++)
    {
        fre[a[i]]++;
    }

    for(int i=1; i<=m; i++)
    {
        printf("%d\n",fre[i]);
    }

    return 0;
}
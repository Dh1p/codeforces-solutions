#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
    }   

    int fre[n];

    for(int i=1; i<=n; i++)
    {
        fre[a[i]]=i;
    }

    for(int i=1; i<=n; i++)
    {
        printf("%d ", fre[i]);
    }

    return 0;
}
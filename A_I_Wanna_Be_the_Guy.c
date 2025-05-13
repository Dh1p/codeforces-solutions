/**
 *     DHIP
**/
     
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n+1];
    int b[n+1];

    for(int i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=1; i<n; i++)
    {
        scanf("%d",&b[i]);
    }

    int fre[n+1];

    for(int i=1; i<=n+1; i++)
    {
        fre[i]=0;
    }

    for(int i=1; i<=n; i++)
    {
        fre[a[i]]++;
    }
    for(int i=1; i<n; i++)
    {
        fre[b[i]]++;
    }

    for(int i=1; i<=n; i++)
    {
        if(fre[i]==0)
        {
            printf("Oh, my keyboard!\n");
            return 0;
        }
    }

    printf("I become the guy.\n");

    return 0;
}
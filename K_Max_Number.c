/**
 *     DHIP
**/
     
#include<stdio.h>

int max(int a[], int n, int i)
{
    if(i==n-1)
    {
        return a[i];
    }
    
    int m = max(a,n,i+1);
    if(a[i]>m)
    {
        return a[i];
    }
    else
    {
        return m;
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    int mx = max(a,n,0);

    printf("%d\n",mx);
    
    return 0;
}
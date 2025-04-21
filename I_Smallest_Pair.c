#include<stdio.h>
#include <limits.h>
int main()
{
    int t,n;
    scanf("%d",&t);

    for(int i=0; i<t; i++)
    {
        scanf("%d",&n);
        int a[n];
        int c=0;
        int min = INT_MAX;

        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }

        for(int i=1; i<n; i++)
        {
            for(int j=i+1; j<=n; j++)
            {
                c=a[i-1]+a[j-1]+(j-1)-(i-1);
                if(c<min)
                {
                    min=c;
                }
            }
        }

        printf("%d\n",min);

    }
    return 0;
}
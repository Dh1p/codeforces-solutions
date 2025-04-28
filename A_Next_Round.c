#include<stdio.h>
int main()
{
    int n,k;
    int a[101];
    scanf("%d %d",&n,&k);

    int count =0;
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(int i=0; i<n; i++)
    {
        if(a[i]>=a[k-1] && a[i]>0)
        {
            count++;
        }
    }

    printf("%d\n",count);
    return 0;
}
/**
 *     DHIP
**/
     
#include<stdio.h>

long long int rec_sum(int a[], int n, int i)
{
    long long int sum = 0;
    if(i==n-1)
    {
        return a[i];
    }

    sum = rec_sum(a,n,i+1);

    sum = sum + a[i];

    return sum;
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

    long long int sum = rec_sum(a,n,0);

    printf("%lld\n",sum);

    return 0;
}
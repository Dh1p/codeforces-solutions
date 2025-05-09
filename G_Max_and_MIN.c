#include<stdio.h>

min_max(int a[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                int temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
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

    min_max(a,n);

    printf("%d %d\n", a[0],a[n-1]);

    return 0;
}
/**
 *     DHIP
**/
     
#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d",&n);
    int a[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(k=0; k<n-1; k++)
    {
        for(int j=k+1; j<n; j++)
        {
            if(a[k]>a[j])
            {
                int temp = a[k];
                a[k] = a[j];
                a[j] = temp;
            }
        }
    }

    int small = a[0];
    int count = 0;

    for(int i=0; i<n; i++)
    {
        if(a[i]==small)
        count++;
    }

    if(count%2==0)
    {
        printf("Unlucky\n");
    }
    else
    {
        printf("Lucky\n");
    }

    return 0;
}
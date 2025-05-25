/**
 *     DHIP
**/
     
#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    for(int i=0; i<t; i++)
    {
        int n;
        scanf("%d",&n);
        int a[n];

        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }

        for(int i=0; i<n; i++)
        {

            if(a[i]%2==0)
            {
                a[i]++;
            }
            
            if(a[i]==1)
            {
                a[i]++;
            }  
        }

        for(int i=0; i<n; i++)
        {
            if(a[i+1]%a[i]==0)
            {
                a[i+1]++;
            }
        }

        for(int i=0; i<n; i++)
        {
            printf("%d ",a[i]);
        }
        printf("\n");
    }
    return 0;
}
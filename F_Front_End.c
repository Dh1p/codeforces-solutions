/**
 *     DHIP
**/
     
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    int i=0, j=n-1;

    while(i<j)
    {
        printf("%d %d ",a[i],a[j]);
        i++;
        j--;
    }
    
        if(n%2!=0)
        {
            int b=(n/2);
            printf("%d\n",a[b]);
        }
    return 0;
}
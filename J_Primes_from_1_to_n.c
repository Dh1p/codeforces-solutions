/**
 *     DHIP
**/
     
#include<stdio.h>


void prime(int n)
{
    int count=0;
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("%d ",n);
    }
}
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=2; i<=n; i++)
    {
        prime(i);
    }
    return 0;
}
//  ********
//	**DHIP**
//  ********
     
#include<stdio.h>
int main()
{
    int n,m;

    for(;;)
    {
        scanf("%d %d",&n,&m);

        if(n<=0 || m<=0)
        {
            return 0;
        }
        else if(n>m)
        {
            int sum = 0;
            for(int i=m; i<=n; i++)
            {
                printf("%d ",i);
                sum+=i;
            }
            printf("sum =%d\n",sum);
        }
        else if (m>n)
        {
            int sum = 0;
            for(int i=n; i<=m; i++)
            {
                printf("%d ",i);
                sum+=i;
            }
            printf("sum =%d\n",sum);
        }
        else if (m==n)
        {
            printf("%d sum =%d\n",m,n);
        }    
    }
    return 0;
}

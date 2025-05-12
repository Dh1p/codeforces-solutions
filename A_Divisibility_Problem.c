/**
 *     DHIP
**/
     
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        int a,b,j;
        scanf("%d %d",&a,&b);
        
        if(a%b==0)
        {
            printf("%d\n",0);
        }
        else
        {
            printf("%d\n",b-(a%b));
        }
        
    }
    return 0;
}
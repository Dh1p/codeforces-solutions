#include<stdio.h>
int main()
{
    int n,a,b,max=0,total=0;
    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        scanf("%d %d",&a,&b);
        total=(total-a)+b;
        if(total>max)
        {
            max=total;
        }
    }
    printf("%d\n",max);
    return 0;
}
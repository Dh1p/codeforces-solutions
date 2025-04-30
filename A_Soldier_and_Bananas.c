#include<stdio.h>
int main()
{
    int a,b,c;

    scanf("%d %d %d",&a,&b,&c);
    int total =0;
    for(int i=1; i<=c;i++)
    {
        total+=(i*a);
    }
    int ans = total-b;
    if(ans<=0)
    {
        printf("0\n");
    }
    else
    {
        printf("%d\n",ans);
    }
    return 0;
}
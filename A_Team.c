#include<stdio.h>
int main()
{
    int t,a,b,c,count=0;
    scanf("%d",&t);

    for(int i=0; i<t; i++)
    {
        scanf("%d %d %d",&a,&b,&c);

        if(a+b+c > 1)
        {
            count++;
        }

    }
    printf("%d",count);
    return 0;
}
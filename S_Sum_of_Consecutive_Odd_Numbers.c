#include<stdio.h>
int main()
{
    int t,a,b,temp,sum;
    scanf("%d",&t);

    for(int i=0; i<t; i++)
    {
        sum=0;
        scanf("%d %d",&a,&b);
        if(b<a)
        {
            temp = b;
            b=a;
            a=temp;
        }

        for(int i=a+1; i<b; i++)
        {
            if(i%2!=0)
            {
                sum+=i;
            }
        }
        printf("%d\n",sum);
    }

   
    return 0;
}
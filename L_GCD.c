/**
 *     DHIP
**/

void gcd(int a, int b)
{
    if(a<b)
    {
        int temp=a;
        a=b;
        b=temp;
    }

    for(int i=b; i>=1; i--)
    {
        if(a%i==0 && b%i==0)
        {
            printf("%d\n",i);
            break;
        }
    }
}
     
#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    gcd(a,b);
    return 0;
}
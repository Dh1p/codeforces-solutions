/**
 *     DHIP
**/
     
#include<stdio.h>
long long int fact(int n)
{
    if(n==1)
    {
        return 1;
    }
    long long int mul = fact(n-1);
    return n*mul;
}

int main()
{
    int n;
    scanf("%d",&n);
    long long int mul = fact(n);
    printf("%lld\n",mul);
    return 0;
}
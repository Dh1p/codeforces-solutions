#include<stdio.h>
int main()
{
    int a;
    long long int b;
    scanf("%d %lld", &a,&b);

    printf("%d + %lld = %lld\n",a,b,a+b);
    printf("%d * %lld = %lld\n",a,b,a*b);
    printf("%d - %lld = %lld\n",a,b,a-b);

    return 0;
}
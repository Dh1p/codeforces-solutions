#include<stdio.h>
int main()
{
    int a;
    long long b;
    char c;
    float f;
    double d;

    scanf("%d %lld %c %f %lf",&a,&b,&c,&f,&d);

    printf("%d\n%lld\n%c\n%.2f\n%.1lf\n",a,b,c,f,d);

    return 0;
}
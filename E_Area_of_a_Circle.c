#include<stdio.h>
int main()
{
    double a;
    scanf("%lf",&a);

    double total = 3.141592653*a*a;

    printf("%.9lf\n",total);


    return 0;
}
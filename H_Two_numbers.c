#include<stdio.h>
#include<math.h>

int main()
{
    float a,b;
    scanf("%f %f",&a,&b);

    double result = a/b;

    int f = (int)floor(result);
    int c = (int)ceil(result);
    int r = (int)round(result);

    printf("floor %f / %f = %d\n",a,b,f);
    printf("ceil %f / %f = %d\n",a,b,c);
    printf("round %f / %f = %d\n",a,b,r);

    return 0;
}
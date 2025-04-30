#include<stdio.h>
int main()
{
    int n,a,b,c,suma=0,sumb=0,sumc=0;
    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        scanf("%d %d %d", &a,&b,&c);

        suma+=a;
        sumb+=b;
        sumc+=c;
    }
    //printf("a%d b%d c%d\n",a,b,c);
    if(suma==0 && sumb==0 && sumc==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
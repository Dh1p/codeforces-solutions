#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    int aa=a,bb=b,cc=c;

    if(a>b)
    {
        int temp=a;
        a=b;
        b=temp;
    }
    if(b>c)
    {
        int temp=b;
        b=c;
        c=temp;
    }
    if(a>b)
    {
        int temp=a;
        a=b;
        b=temp;
    }

    printf("%d\n%d\n%d\n\n",a,b,c);
    printf("%d\n%d\n%d\n",aa,bb,cc);
    return 0;
}
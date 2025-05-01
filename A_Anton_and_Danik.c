#include<stdio.h>
int main()
{
    int n,aa=0,d=0;
    scanf("%d",&n);
    char a[n+1];
    scanf("%s",a);

    for(int i=0; a[i]!='\0'; i++)
    {
        if(a[i]=='A')
        {
            aa++;
        }
        else if(a[i]=='D')
        {
            d++;
        }
    }

    //printf("aa%d d%d\n",aa,d);

    if(aa>d)
    {
        printf("Anton\n");
    }
    else if(d>aa)
    {
        printf("Danik\n");
    }
    else
    {
        printf("Friendship\n");
    }

    return 0;
}
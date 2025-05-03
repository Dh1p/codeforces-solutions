#include<stdio.h>
#include<string.h>

int main()
{
    char a[101],h,e,l1,l2;
    int count=0;
    scanf("%s",a);

    int len = strlen(a);

    for(int i=0; i<len; i++)
    {
        if(a[i]=='h')
        {
            count++;
            h=i;
            break;
        }
    }
    for(int i=h+1; i<len; i++)
    {
        if(a[i]=='e')
        {
            count++;
            e=i;
            break;
        }
    }
    for(int i=e+1; i< len; i++)
    {
        if(a[i]=='l')
        {
            count++;
            l1=i;
            break;
        }
    }
    for(int i=l1+1; i< len; i++)
    {
        if(a[i]=='l')
        {
            count++;
            l2=i;
            break;
        }
    }
    for(int i=l2+1; i< len; i++)
    {
        if(a[i]=='o')
        {
            count++;
            break;
        }
    }

    if(count==5)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    
    return 0;
}
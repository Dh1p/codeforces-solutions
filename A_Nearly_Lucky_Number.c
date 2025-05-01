#include<stdio.h>
#include<string.h>

int main()
{
    char a[20];
    scanf("%s",a);

    int count=0;
    int len=strlen(a);
    for(int i=0; i< len; i++)
    {
        if(a[i]=='4' || a[i]=='7')
        {
            count++;
        }
    }
    if(count==4 || count==7)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
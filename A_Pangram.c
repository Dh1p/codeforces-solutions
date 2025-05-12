/**
 *     DHIP
**/
     
#include<stdio.h>
int main()
{
    int t;
    int p=0,a=0,n=0,g=0,r=0,m=0;
    char arr[101];
    scanf("%d",&t);
    scanf("%s",arr);

    for(int i=0; i<t; i++)
    {
        if(arr[i]=='p')
        {
            p++;
        }
        else if(arr[i]=='a')
        {
            a++;
        }
        else if(arr[i]=='n')
        {
            n++;
        }
        else if(arr[i]=='g')
        {
            g++;
        }
        else if(arr[i]=='r')
        {
            r++;
        }
        else if(arr[i]=='m')
        {
            m++;
        }
    }

    if(p>0 && a>0 && n>0 && g>0 && r>0 && m>0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
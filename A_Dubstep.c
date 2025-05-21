/**
 *     DHIP
**/
     
#include<stdio.h>
#include<string.h>
int main()
{
    char a[201];
    char b[201];

    scanf("%s",a);

    int l = strlen(a);

    int count=0;
    for(int i=0; i<l; i++)
    {
        if(a[i]='W' && a[i+1]=="U" && a[i+3]=='B')
        {
            count++;
        }
    }
    printf("%d",count);

    return 0;
}
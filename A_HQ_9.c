/**
 *     DHIP
**/
     
#include<stdio.h>
int main()
{
    char a[101];
    scanf("%s",a);
    int count = 0;
    for(int i=0; a[i]!='\0'; i++)
    {
        if(a[i]=='H' || a[i]=='Q' || a[i]=='9')
        {
            count++;
        }
    }
    if(count>0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
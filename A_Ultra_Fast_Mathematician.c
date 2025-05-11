/**
 *     DHIP
**/
     
#include<stdio.h>
int main()
{
    char a[101],b[101];
    scanf("%s %s",a,b);
    
    int i=0;
    while(a[i]!='\0')
    {
        if(a[i]==b[i])
        {
            printf("0");
        }
        else
        {
            printf("1");
        }
        i++;
    }
    return 0;
}
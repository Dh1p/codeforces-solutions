/**
 *     DHIP
**/
     
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        if(i%2!=0)
        {
            printf("I hate ");
        }
        else
        {
            printf("I love ");
        }

        if(i<n)
        printf("that ");
    }
    printf("it\n");
    return 0;
}
/**
 *     DHIP
**/
     
#include<stdio.h>
int main()
{
    int r,c,k;
    scanf("%d %d",&r,&c);
    int a[r][c];

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    scanf("%d",&k);
    int flag=0;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            if(a[i][j]==k)
            {
                flag=1;
            }
        }
    }

    if(flag==0)
    {
        printf("will take number\n");
    }
    else
    {
        printf("will not take number\n");
    }

    return 0;
}
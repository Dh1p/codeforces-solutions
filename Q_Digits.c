#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    for(int i =1; i<=t; i++)
    {
        int a;
        scanf("%d",&a);

        for(;;)
        {
            printf("%d ",a%10);
            a/=10;
            if(a==0)
            {
                break;
            }
        }
        printf("\n");
    }
    return 0;
}
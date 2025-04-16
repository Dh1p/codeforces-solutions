#include<stdio.h>
int main()
{
    int n,a;

    for(;;)
    {
        scanf("%d",&a);
        if(a==1999)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }
    return 0;
}
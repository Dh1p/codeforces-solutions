#include<stdio.h>
int main()
{
    int a,i,counter=0;
    scanf("%d",&a);

    for(i=1;i<=a;i++)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
            counter++;
        }
    }
    if(counter==0)
    {
        printf("-1");
    }
    return 0;
}
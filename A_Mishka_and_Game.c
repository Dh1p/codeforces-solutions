#include<stdio.h>
int main()
{
    int n, Mishka, Chris, m=0, c=0;
    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        scanf("%d %d",&Mishka,&Chris);

        if(Mishka>Chris)
        {
            m++;
            //printf("m = %d\n",m);
        }
        if(Chris>Mishka)
        {
            c++;
            //printf("c = %d\n",c);
        }
        // if(Mishka==Chris)
        // {
        //     d++;
        //     printf("d = %d\n",d);
        // }
    }

    if(m==c)
    {
        printf("Friendship is magic!^^\n");
    }
    else if(m>c)
    {
        printf("Mishka\n");
    }
    else
    {
        printf("Chris\n");
    }

    m=0, c=0;

    return 0;
}
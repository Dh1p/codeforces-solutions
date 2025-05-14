/**
 *     DHIP
**/
     
#include<stdio.h>
#include<string.h>

void space(char a[], int i)
{
    int c = strlen(a);

    if(i==c)
    {
        return;
    }

    printf("%c ",a[i]);

    if(i==c-1)
    {
        printf("\n");
    }

    space(a,i+1);
    
}


int main()
{
    int test;
    scanf("%d",&test);

    char a[20];

    for(int i=0; i<test; i++)
    {
        scanf("%s",a);

        space(a,0);
    }
    return 0;
}
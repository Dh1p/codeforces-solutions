#include<stdio.h>

void PrintStar(int n)
{
    int star=1, space = n-1;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<space; j++)
        {
            printf(" ");
        }
        space--;
        for(int j=0; j<star; j++)
        {
            printf("*");
        }
        printf("\n");
        star+=2;
    }
}


int main()
{
    int n;
    scanf("%d",&n);
    PrintStar(n);   
    return 0;
}
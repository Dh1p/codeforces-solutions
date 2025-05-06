#include<stdio.h>

void Print_Star(int x)
{
    for(int i=0; i<x; i++)
    {
        for(int j=i; j<x; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    Print_Star(n);   
    return 0;
}
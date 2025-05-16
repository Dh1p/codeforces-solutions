/**
 *     DHIP
**/
     
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int a,b;

    scanf("%d",&a);

    int arr[a];
   
    for(int i=1; i<=a; i++)
    {
        scanf("%d",&arr[i]);
    }

    scanf("%d",&b);

    int arr1[b];

    for(int i=1; i<=b; i++)
    {
        scanf("%d",&arr1[i]);
    }

    int fre[n];

    for(int i=1; i<=n; i++)
    {
        fre[i]=0;
    }

    for(int i=1; i<=a; i++)
    {
        fre[arr[i]]++;
    }
    for(int i=1; i<=b; i++)
    {
        fre[arr1[i]]++;
    }

    for(int i=1; i<=n; i++)
    {
        if(fre[i]==0)
        {
            printf("Oh, my keyboard!\n");
            return 0;
        }
    }

    printf("I become the guy.\n");

    return 0;
}
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    int i=0, j=n-1,counter=0;
    while(i<j)
    {
        if(a[i]!=a[j])
        {
            counter++;
        }
        i++;
        j--;
    }

    if(counter>0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }

    return 0;
}
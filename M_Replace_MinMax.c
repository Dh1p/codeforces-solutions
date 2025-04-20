#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int min, max, min_index, max_index;

    min = a[0];
    min_index=0;

    for (int i = 0; i < n; i++)
    {
        if (min > a[i])
        {
            min = a[i];
            min_index=i;
        }
    }

    max = a[0];
    max_index=0;

    for (int i = 0; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
            max_index=i;
        }
    }

    int temp;
    temp= a[min_index];
    a[min_index]=a[max_index];
    a[max_index]=temp;

    for(int i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
    
    return 0;
}
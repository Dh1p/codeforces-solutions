#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int low = arr[0];

    for(int i=0; i<n; i++)
    {
        if(low > arr[i])
        {
            low = arr[i];
        }
    }

    for(int i =0; i<n; i++)
    {
        if(arr[i]==low)
        {
            printf("%d %d",low,i+1);
            break;
        }
    }

    return 0;
}
//Take an array from input and print the maximum value of that array.

#include<stdio.h>
int main()
{
    int n, max;
    scanf("%d",&n);
    int arr[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    max = arr[0];
    for(int i=0; i<n; i++)
    { 
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("%d", max);

    return 0;
}
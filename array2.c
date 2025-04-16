// Take an array from input and count how many odd numbers are present in that array.

#include <stdio.h>
int main()
{
    int n, counter = 0;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            counter++;
        }
    }

    printf("%d", counter);

    return 0;
}
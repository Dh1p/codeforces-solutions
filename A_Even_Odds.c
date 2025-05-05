#include <stdio.h>
int main()
{
    int a, k;
    scanf("%d %d", &a, &k);
    int arr[a + 1];

    int j = 1;
    for (int i = 1; i <= a; i++)
    {
        if (i % 2 != 0)
        {
            arr[j] = i;
            j++;
        }
    }

    for (int i = 1; i <= a; i++)
    {
        if (i % 2 == 0)
        {
            arr[j] = i;
            j++;
        }
    }

    printf("%d ", arr[k]);

    return 0;
}
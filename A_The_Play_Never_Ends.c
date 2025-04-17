#include <stdio.h>
int main()
{
    int n, counter=0;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] % 3 == 1)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
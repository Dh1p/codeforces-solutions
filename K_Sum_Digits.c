#include <stdio.h>
int main()
{
    int a, sum = 0;
    scanf("%d", &a);
    char arr[1000001];
    scanf("%s", &arr);

    for (int i = 0; i < a; i++)
    {
        sum += arr[i] - '0';
    }
    printf("%d\n", sum);

    return 0;
}
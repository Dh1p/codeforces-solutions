#include <stdio.h>
int main()
{
    int n, a;
    int even = 0, odd = 0, positive = 0, negative = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a);

        if (a > 0)
        {
            positive++;
        }
        else if(a<0)
        {
            negative++;
        }

        if (a % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", positive);
    printf("Negative: %d\n", negative);

    return 0;
}
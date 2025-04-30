#include <stdio.h>
int main()
{
    int n, steps = 0;
    scanf("%d", &n);

    if (n >= 5)
    {
        if (n % 5 == 0)
        {
            steps = n / 5;
            printf("%d\n", steps);
        }
        else
        {
            steps = n / 5;
            printf("%d\n", steps + 1);
        }
    }
    else
    {
        printf("1\n");
    }
    return 0;
}
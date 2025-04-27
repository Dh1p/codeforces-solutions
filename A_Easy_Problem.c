#include <stdio.h>
int main()
{
    int t, a, count;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d", &a);

        count = 0;
        for (int j = 1; j < a; j++)
        {
            for (int k = 1; k < a; k++)
            {
                if (j + k == a)
                {
                    count++;
                }
            }
        }

        printf("%d\n", count);
    }
    return 0;
}
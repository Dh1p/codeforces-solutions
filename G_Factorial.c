#include <stdio.h>
int main()
{
    int t, n;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        
        long long int fact = 1;

        if (n == 0)
        {
            printf("1\n");
        }
        else
        {
            for (int j = 1; j <= n; j++)  
            {
                fact *= j;
            }
            printf("%lld\n", fact);
        }
    }
    return 0;
}

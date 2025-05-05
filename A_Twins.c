#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    float avg = 0;
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }

    //avg = ceil(sum / (float)n);

    // printf("SUM %f\n",sum);
    // printf("N %d\n",n);
    // printf("AVG %f\n",avg);

    int sum1 = 0;
    int count = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        sum1 += a[i];

        count++;
 

        if (sum1 > (sum-sum1))
        {
            printf("%d\n", count);
            return 0;
        }
    }
    return 0;
}
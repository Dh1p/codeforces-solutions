#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int m = 0; m < t; m++)
    {
        int n;
        scanf("%d", &n);
        char s[11];
        scanf("%s", s);

        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            char temp[11];

            for (int k = 0; k < n; k++)
            {
                temp[k] = s[k];
            }

            if (temp[i] == '1')
            {
                temp[i] = '0';
            }
            else
            {
                temp[i] = '1';
            }

            for (int j = 0; j < n; j++)
            {
                if (temp[j] == '1')
                {
                    sum += 1;
                }
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}
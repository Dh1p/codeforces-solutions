#include <stdio.h>
#include <string.h>

int main()
{
    char a[101];
    scanf("%s", a);
    int len = strlen(a);

    int count = 1;
    for (int i = 0; i < len; i++)
    {
        if (a[i] == a[i + 1])
        {
            count++;

            if (count == 7)
            {
                printf("YES\n");
                break;
            }
        }
        else
        {
            count = 1;
        }
    }

    if (count < 7)
    {
        printf("NO\n");
    }
    return 0;
}
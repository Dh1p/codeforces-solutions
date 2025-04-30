#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char a[101];
    scanf("%s", a);

    int len = strlen(a);

    int low = 0, cap = 0;
    for (int i = 0; i < len; i++)
    {
        if (a[i] >= 'a' && a[i] <= 'z')
        {
            low++;
        }
        else
        {
            cap++;
        }
    }

    if (low > cap || low == cap)
    {
        for (int i = 0; i < len; i++)
        {
            printf("%c", tolower(a[i]));
        }
    }
    else
    {
        for (int i = 0; i < len; i++)
        {
            printf("%c", toupper(a[i]));
        }
    }

    return 0;
}
#include <stdio.h>
int main()
{
    int t, count;
    char a[101];
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        count=0;
        scanf("%s", &a);

        for (int j = 0; a[j] != '\0'; j++)
        {
            count++;
        }

        if (count > 10)
        {
            printf("%c%d%c\n", a[0], count - 2, a[count - 1]);
        }
        else
        {
            printf("%s\n", a);
        }
    }
    return 0;
}
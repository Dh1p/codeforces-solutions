#include <stdio.h>
int main()
{

    int y, a, b, c, d;
    while (scanf("%d", &y) != EOF)
    {
        while (y > 0)
        {
            y++;
            a = y / 1000;
            b = (y % 1000) / 100;
            c = ((y % 1000) % 100) / 10;
            d = ((y % 1000) % 100) % 10;

            if (a != b && a != c && a != d && d != c && d != b && c != b)
                break;
        }
        printf("%d\n", y);
    }
    return 0;
}

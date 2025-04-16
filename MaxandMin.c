#include <stdio.h>
int main()
{
    int a, b, c, max, min;
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
    {
        max = a;
        if (b > c)
        {
            min = c;
        }
        else
        {
            min = b;
        }
        printf("%d %d", min, max);
    }

    else if (b > a && b > c)
    {
        max = b;
        if (a > c)
        {
            min = c;
        }
        else
        {
            min = a;
        }
        printf("%d %d", min, max);
    }

    else if (c > a && c > b)
    {
        max = c;
        if (a > b)
        {
            min = b;
        }
        else
        {
            min = a;
        }
        printf("%d %d", min, max);
    }

    else if (a == b && a > c)
    {
        max = a;
        min = c;
        printf("%d %d", min, max);
    }

    else if (a == b && a < c)
    {
        max = c;
        min = a;
        printf("%d %d", min, max);
    }

    else if (a == c && a > b)
    {
        max = a;
        min = b;
        printf("%d %d", min, max);
    }

    else if (a == c && a < b)
    {
        max = b;
        min = a;
        printf("%d %d", min, max);
    }

    else if (b == c && b > a)
    {
        max = b;
        min = a;
        printf("%d %d", min, max);
    }

    else if (b == c && b < a)
    {
        max = a;
        min = b;
        printf("%d %d", min, max);
    }

    else if (a == b && b == c)
    {
        max = a;
        min = b;
        printf("%d %d", min, max);
    }

    return 0;
}

//Best Solution

// #include <stdio.h>

// int main() {
//     int a, b, c;
//     scanf("%d %d %d", &a, &b, &c);

//     int max = a, min = a;

//     if (b > max) max = b;
//     if (c > max) max = c;

//     if (b < min) min = b;
//     if (c < min) min = c;

//     printf("%d %d\n", min, max);

//     return 0;
// }

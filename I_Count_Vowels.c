/**
 *     DHIP
 **/

#include <stdio.h>

int count(char a[], int i)
{
    if (a[i] == '\0')
    {
        return 0;
    }

    int sum = count(a, i + 1);

    if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' ||
        a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
    {
        return sum + 1;
    }
    else
    {
        return sum;
    }
}

int main()
{
    char a[201];
    fgets(a, 201, stdin);

    int sum = count(a, 0);

    printf("%d\n", sum);

    return 0;
}
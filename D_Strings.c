#include <stdio.h>
#include <string.h>
int main()
{
    char a[11];
    char b[11];

    scanf("%s", &a);
    scanf("%s", &b);

    int ln1 = strlen(a);
    int ln2 = strlen(b);

    char c[22];

    for (int i = 0; i < ln1; i++)
    {
        c[i] = a[i];
    }

    for (int i = 0; i < ln2; i++)
    {
        c[i + ln1] = b[i];
    }

    c[ln1+ln2]='\0';

    char temp;

    temp = a[0];
    a[0] = b[0];
    b[0] = temp;

    printf("%d %d\n%s\n%s %s\n", ln1, ln2, c, a, b);

    return 0;
}
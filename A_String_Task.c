#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char a[101];
    scanf("%s", a);

    int len = strlen(a);

    for (int i = 0; i < len; i++)
    {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' ||a[i]=='y'||
            a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U'||a[i]=='Y')
        {
            continue;
        }
        else
        {
            printf(".");
            printf("%c",tolower(a[i]));
        }
    }
    return 0;
}
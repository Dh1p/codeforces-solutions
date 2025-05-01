#include<stdio.h>
#include<string.h>

int main()
{
    char a[101];
    char b[101];
    scanf("%s %s",a,b);

    int lenA = strlen(a);
    int lenB = strlen(b);

    if(lenA!=lenB)
    {
        printf("NO\n");
        return 0;
    }

    int i=0;
    int j=lenA-1;

    while(i<lenA)
    {
        if(a[i]!=b[j])
        {
            printf("NO\n");
            return 0;
        }

        i++;
        j--;   
    }
        printf("YES\n");

    return 0;
}
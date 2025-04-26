#include <stdio.h>
#include<string.h>

int main()
{
    char a[51], b[51];
    int n;
    scanf("%d", &n);
    for (int j = 0; j < n; j++)
    {
        scanf("%s %s", &a, &b);

        int l1 = strlen(a);
        int l2 = strlen(b);

        int i=0,j=0;
        while (i < l1 && j < l2)
        {
            printf("%c%c",a[i],b[j]);
            i++;
            j++;
        }

        while(i<l1)
        {
            printf("%c",a[i]);
            i++;
        }

        while (j<l2)
        {
            printf("%c",b[j]);
            j++;
        }
        
        printf("\n");
    }
    return 0;
}
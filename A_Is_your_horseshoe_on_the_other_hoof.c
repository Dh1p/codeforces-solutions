/**
 *     DHIP
 **/

#include <stdio.h>
int main()
{
    int a[4];

    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &a[i]);
    }

    int count = 0;
    for (int i = 0; i < 4 - 1; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if (a[i] == a[j])
                count++;
        }
    }

    if(count>3)
    {
        printf("3");
    }
    else if (count==3)
    {
        printf("2");
    } 
    else
    {
        printf("%d",count);
    }
    return 0;
}
#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    char a[100001];

    for (int i = 0; i < t; i++)
    {
        int count =0;
        scanf("%s", &a);

        for (int i = 0; a[i] != '\0'; i++)
        {
            if(a[i]=='0' && a[i+1]=='1' &&  a[i+2]=='0' || 
                a[i]=='1' && a[i+1]=='0' &&  a[i+2]=='1')
                {
                    count++;
                    break;
                }
        }

        if (count == 1)
        {
            printf("Good\n");
        }
        else
        {
            printf("Bad\n");
        }
    }
    return 0;
}
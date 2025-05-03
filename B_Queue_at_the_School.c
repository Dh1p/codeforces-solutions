#include <stdio.h>
int main()
{
    int n, t;
    scanf("%d %d", &n, &t);
    char a[n + 1], temp;
    scanf("%s", a);

    for(int i=0; i<t; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(a[j]=='B' && a[j+1]=='G')
            {
                char temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                j++;
            }
        }
    }

    printf("%s",a);

    return 0;
}
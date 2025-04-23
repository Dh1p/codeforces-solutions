#include<stdio.h>
#include<string.h>

int main()
{
    int n,ln=0;
    scanf("%d",&n);
    char a[101];

    for(int i=0; i<n; i++)
    {
        scanf("%s",&a);

        ln=strlen(a);

        if(ln<=10)
        {
            printf("%s\n",a);
        }
        else
        {
            printf("%c%d%c\n",a[0],ln-2,a[ln-1]);
        }

        ln=0;
    }


    return 0;
}
/**
 *     DHIP
 **/

#include <stdio.h>
#include <ctype.h>
int main()
{
    int t;
    scanf("%d", &t);
    if(t<26)
    {
        printf("NO\n");
        return 0;
    }

    char a[101];
    scanf("%s", a);

    for(int i=0; i<t; i++)
    {
        a[i] = tolower(a[i]);
    }

    //printf("%s",a);

    int fre[26]={0};

    for(int i=0; i<t; i++)
    {
        char temp = a[i]-'a';
        //printf("%d\n",temp);
        fre[temp]++;
    }

    for(int i=0; i<26; i++)
    {
        if(fre[i]==0)
        {
            printf("NO\n");
            return 0;
        }
    }

    printf("YES\n");
    return 0;
}
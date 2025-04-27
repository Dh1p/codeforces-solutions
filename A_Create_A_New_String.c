#include<stdio.h>
int main()
{
    char s[1001], t[1001];
    int countS=0,countT=0;
    scanf("%s",s);
    scanf("%s",t);

    for(int i=0; s[i]!='\0'; i++)
    {
        countS++;
    }

    for(int i=0; t[i]!='\0'; i++)
    {
        countT++;
    }

    printf("%d %d\n", countS, countT);
    printf("%s %s\n", s, t);

    return 0;
}
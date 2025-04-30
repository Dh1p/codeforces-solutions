#include<stdio.h>
#include<string.h>
int main()
{
    char a[1001];
    scanf("%s",a);

    if(a[0]>='a' && a[0]<='z')
    {
        a[0]= a[0]-('a'-'A');
    }
    printf("%s",a);
    return 0;
}
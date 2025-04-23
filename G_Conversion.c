#include<stdio.h>
#include<string.h>
int main()
{
    char a[100001];

    fgets(a,100001,stdin);
    a[strcspn(a, "\n")] = '\0';


    for(int i=0; a[i]!='\0' ; i++)
    {
        if(a[i]==',')
        {
            printf(" ");
        }
        else
        {
            if(a[i]>='a' && a[i]<='z')
            {
                printf("%c",a[i]-32);
            }
            else
            {
                printf("%c",a[i]+32);
            }
        }
        
        
    }
    return 0;
}
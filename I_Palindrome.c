#include<stdio.h>
#include<string.h>
int main()
{
    char a[1001];
    scanf("%s",&a);
    int ln=strlen(a);

    int i=0;
    int j=ln-1;
    int count=0;
    
    while(i<j)
    {
        if(a[i]!=a[j])
        {
            count++;
           
        }
        i++;
        j--;
    }

    if(count==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
#include<stdio.h>
#include<string.h>
#include <stdlib.h>

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
        printf("%s\n",a);
        printf("YES");
    }
    else
    {
        int num = atoi(a);
        int n=0, count = 0;

        while (n==0)
        {
            n = num%10;
            num/=10;
            count++;
        }

        for(int i=((ln-1)-(count-1)); i>=0; i--)
        {
            printf("%c",a[i]);
        }
        
        printf("\nNO");
    }

    return 0;
}
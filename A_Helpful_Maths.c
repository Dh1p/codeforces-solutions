#include <stdio.h>
#include <string.h>

int main()
{
    char a[101];
    char b[101];
    int one=0,two=0,three=0;
    scanf("%s", a);

    int l = strlen(a);

    int j = 0;
    for (int i = 0; i < l; i++)
    {
        if (a[i] == '1')
        {
         one++;   
        }
        else if(a[i] == '2')
        {
            two++;
        }
        else if(a[i] == '3')
        {
            three++;
        }
    }
    int sum=one+two+three;
    //printf("Sum %d\n",sum);
    int count=0;

        for(int i=0; i< one; i++)
        {
            printf("1");
            
            if(count<sum-1)
            {
                printf("+");
                count++;
                //printf("1-%d\n",count);
            }
        }

        for(int i=0; i<two; i++)
        {
            printf("2");
            
            if(count<sum-1)
            {
                printf("+");
                count++;
                //printf("2-%d\n",count);
            }
        }

        for(int i=0; i< three; i++)
        {
            printf("3");
            
            if(count<sum-1)
            {
                printf("+");
                count++;
                //printf("3-%d",count);
            }
        }

    return 0;
}
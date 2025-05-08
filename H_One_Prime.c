#include<stdio.h>
void prime(int n)
{
    int flag = 0;
    for(int i=3; i<n; i+=2)
    {
        if(n%i==0)
        {
            flag = 1;
            printf("NO\n");
            break;
        }
    }
    if(flag == 0)
    {
        printf("YES\n");
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    prime(n);   
    return 0;
}
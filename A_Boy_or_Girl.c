#include<stdio.h>
#include<string.h>
int main()
{
    char a[101];
    scanf("%s",a);

    int l=strlen(a);
    int fre[26]={0};
    for(int i=0; i<l; i++)
    {
        fre[a[i]-'a']++;
    }
    // for(int i=0; i<26; i++)
    // {
    //     printf("%c->%d\n",i+'a',fre[i]);
    // }

    int count =0;
    for(int i=0; i<26; i++)
    {
        if(fre[i]>0)
        count++;
    }
    //printf("%d\n",count);

    if(count%2==0)
    {
        printf("CHAT WITH HER!\n");
    }
    else
    {
        printf("IGNORE HIM!\n");
    }
    return 0;
}
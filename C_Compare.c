// Without Function

// #include<stdio.h>
// int main()
// {
//     char a[21];
//     char b[21];
//     scanf("%s %s", &a,&b);

//     int i=0;

//     while(1)
//     {
//         if(a[i]==b[i])
//         {
//             i++;
//         }
//         else if(a[i]>b[i])
//         {
//             printf("%s\n",b);
//             break;
//         }
//         else if(b[i]>a[i])
//         {
//             printf("%s\n",a);
//             break;
//         }
//         else if(a[i]=='\0' && b[i]=='\0')
//         {
//             printf("%s\n",a);
//             break;
//         }
//         else if(a[i]=='\0')
//         {
//             printf("%s\n",a);
//             break;
//         }
//         else if(b[i]=='\0')
//         {
//             printf("%s\n",b);
//             break;
//         }

//     }
//     return 0;
// }

#include<stdio.h>
#include<string.h>
int main()
{
    char a[101];
    char b[101];

    scanf("%s %s",a,b);

    int n = strcmp(a,b);
    if(n<0)
    {
        printf("%s\n",a);
    }
    else if(n>0)
    {
        printf("%s\n",b);
    }
    else
    {
        printf("%s\n",a);
    }
    return 0;
}
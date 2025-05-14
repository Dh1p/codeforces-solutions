/**
 *     DHIP
**/
     
#include<stdio.h>
#include<string.h>

void space(char a[], int i)
{
    int c = strlen(a);

    if(i==c)
    {
        return;
    }

    printf("%c ",a[i]);

    if(i==c-1)
    {
        printf("\n");
    }

    space(a,i+1);
    
}


int main()
{
    int test;
    scanf("%d",&test);

    char a[20];

    for(int i=0; i<test; i++)
    {
        scanf("%s",a);

        space(a,0);
    }
    return 0;
}

/**
 *     DHIP
**/
     
// #include<stdio.h>

// void print(int a)
// {
//     if(a==0)
//     {
//         return;
//     }
//     print(a/10);

//     int last = a%10;

//     printf("%d ",last);

    
// }

// int main()
// {
//     int n,a;
//     scanf("%d",&n);

//     for(int i=0; i<n; i++)
//     {
//         scanf("%d",&a);
//         if(a==0)
//         {
//             printf("0");
//         }

//         print(a);
//         printf("\n");
//     }
//     return 0;
// }
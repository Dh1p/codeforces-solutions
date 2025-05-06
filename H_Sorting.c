// #include <stdio.h>
// int main()
// {
//     int t, temp, idx;
//     scanf("%d", &t);
//     int a[t];
//     int b[t];

//     for (int i = 0; i < t; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     temp=a[0];
//     for (int i = 0; i < t; i++)
//     {
        
//         for (int j = i; j < t; j++)
//         {
//             if (temp > a[j])
//             {
//                 temp = a[j];
//             }
//         }

//         for (int m = 0; m < t; m++)
//         {
//             if (a[m] == temp)
//             {
//                 idx = m;
//             }
//         }

//         a[idx]=a[i];
//         //printf("%d = %d\n", a[idx], a[i]);
//         a[i]=temp;
//         temp=a[i+1];
//         //printf("%d = %d\n", a[i], temp);

//     }

//     for (int i = 0; i < t; i++)
//     {
//         printf("%d ", a[i]);
//     }

//     return 0;
// }

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
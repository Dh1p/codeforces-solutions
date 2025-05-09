// #include <stdio.h>
// int main()
// {
//     int a, k;
//     scanf("%d %d", &a, &k);
//     int arr[a + 1];

//     int j = 1;
//     for (int i = 1; i <= a; i++)
//     {
//         if (i % 2 != 0)
//         {
//             arr[j] = i;
//             j++;
//         }
//     }

//     for (int i = 1; i <= a; i++)
//     {
//         if (i % 2 == 0)
//         {
//             arr[j] = i;
//             j++;
//         }
//     }

//     printf("%d ", arr[k]);

//     return 0;
// }

#include<stdio.h>
int main()
{
    long long int n,x;
    long long int middle;
    long long int ans;
    scanf("%lld %lld",&n,&x);

    if(n%2==0)
    {
        middle = n/2;
    }
    else
    {
        middle=(n+1)/2;
    }

    if(x<=middle)
    {
        ans = x+(x-1);
        printf("%lld\n",ans);
    }
    else
    {
        if(n%2==0)
        {
            ans = (x+(x-1))-(n-1);
            printf("%lld\n",ans);
        }
        else
        {
            ans = (x+(x-1))-(n);
            printf("%lld\n",ans);
        }
    }
    return 0;
}
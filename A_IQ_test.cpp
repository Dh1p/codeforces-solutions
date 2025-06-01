/**
 *     DHIP
 **/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, even = 0, odd = 0;
    cin >> n;
    int a[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        if (a[i] % 2 == 0)
        {
            // index_even=a[i];
            even++;
        }
        else
        {
            // index_odd=a[i];
            odd++;
        }
        if (even > 1 || odd > 1)
            break;
    }

    if (odd == 2)
    {
        for (int i = 1; i <= n; i++)
        {
            if (a[i] % 2 == 0)
            {
                cout << i << endl;
            }
        }
    }
    else if (even == 2)
    {
        for (int i = 1; i <= n; i++)
        {
            if (a[i] % 2 != 0)
            {
                cout << i << endl;
            }
        }
    }
    return 0;
}
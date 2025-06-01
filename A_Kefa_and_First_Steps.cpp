/**
 *     DHIP
 **/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int count = 0,mx;
        for (int j = 0; j < n-1; j++)
        {
            if (a[j] <= a[j+1])
            {
                count++;
                mx = max(mx,count);
            }
            else
            {
                count = 0;
            }
        }
    

    cout << mx+1 << endl;

    return 0;
}
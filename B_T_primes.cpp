/**
 *     DHIP
 **/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    long long int a[n];

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    for(int i=0; i<n; i++)
    {
        long long int count = 0;
        for(long long int j=1; j*j<=a[i]; j++)
        {
            if(a[i]%j==0)
            {
                count++;
                if(j!=a[i]/j)
                {
                    count++;
                }
            }
        }
        if(count==3)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
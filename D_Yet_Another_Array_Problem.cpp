/**
 *     DHIP
 **/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        vector<long long int> v(n);
        for (long long int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        long long int ans=v[0];
        for (long long int i = 1; i < n; i++)
        {
            ans = gcd(ans, v[i]);
        }

        long long int a=2;
        while(gcd(a,ans)!=1)
        {
            a++;
            if(a>1e18)
                break;
        }
        cout << a << "\n";
    }
    return 0;
}
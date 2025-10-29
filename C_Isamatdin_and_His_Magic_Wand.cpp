/**
 *     DHIP
 **/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        // priority_queue<int,vector<int>,greater<int>>even,odd;
        int even = 0, odd = 0;
        for (auto a : v)
        {
            if (a % 2 == 0)
                even++;
            else
                odd++;
        }

        if (even == n || odd == n)
        {
            for (int i = 0; i < n; i++)
                cout << v[i] << " ";
        }
        else
        {
            sort(v.begin(), v.end());
            for (int i = 0; i < n; i++)
                cout << v[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
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
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;
        vector<long long int> v(q);
        for (long long int i = 0; i < q; i++)
        {
            cin >> v[i];
        }

        for (long long int j = 0; j < q; j++)
        {
            long long int a = v[j];
            long long int count = 0, pos = 0;
            while (a > 0)
            {
                if (s[pos] == 'A')
                    a -= 1;
                else
                    a /= 2;
                pos = (pos + 1) % n;
                count++;
            }
            cout << count << "\n";
        }
    }
    return 0;
}
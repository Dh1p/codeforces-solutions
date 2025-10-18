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
        int fact = 1;
        for (int i = 1; i <= n; i++)
        {
            fact *= i;
        }
        string s = to_string(fact);
        cout << s.back() << "\n";
    }
    return 0;
}
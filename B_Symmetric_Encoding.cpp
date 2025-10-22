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
        string b;
        cin >> b;

        string r = b;
        sort(r.begin(), r.end());
        set<char> st(r.begin(), r.end());
        r = string(st.begin(), st.end());

        map<char, char> mp;
        int len = r.size();
        for (int i = 0; i < len; i++)
        {
            mp[r[i]] = r[len - 1 - i];
        }
        for (char &ch : b)
            ch = mp[ch];
        cout << b << "\n";
    }
    return 0;
}
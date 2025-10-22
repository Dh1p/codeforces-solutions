/**
 *     DHIP
 **/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;

    string result = "";
    for (char c : s)
    {
        if (c == '<')
        {
            if (!result.empty())
                result.pop_back();
        }
        else
        {
            result.push_back(c);
        }
    }

    cout << result << "\n";
    return 0;
}
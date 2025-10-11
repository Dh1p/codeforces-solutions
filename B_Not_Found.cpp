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
    for (char i = 'a'; i <= 'z'; i++)
    {
        bool a = false;
        for (int j = 0; j < s.size(); j++)

        {
            if (i == s[j])
            {
                a = true;
                break;
            }
        }
        if(!a)
        {
            cout << i <<"\n";
            return 0;
        }
    }
    cout << "None\n";
    return 0;
}
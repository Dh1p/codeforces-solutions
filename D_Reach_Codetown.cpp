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
        string s;
        cin >> s;
        int count = 0;
        bool b = true;

        for (int i = 0; i < s.size() - 1; i++)
        {
            if (i % 2 == 0)
            {
                if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
                {
                    // cout << "NO\n";
                    // break;
                    // b=false;
                }
                else
                {
                    count++;
                }
            }
            else
            {
                if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
                {
                    count++;
                }
                else
                {
                    // cout << "NO\n";
                    // break;
                    // b=false;
                }
            }
        }
        if (s[7] == 'A' || s[7] == 'E' || s[7] == 'I' || s[7] == 'O' || s[7] == 'U')
        {
            
            // cout << "NO\n";
            // b=false;
        }
        else
        {
            count++;
        }
        if(count==8)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
            


    }
    return 0;
}
/**
 *     DHIP
**/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        s = ' ' + s;

        int l=0,r=0;
        for(int i=1; i<=n; i++)
        {
            if(s[i]=='B')
            {
                l=i;
                break;
            }
        }
        for(int i=n; i>=1; i--)
        {
            if(s[i]=='B')
            {
                r=i;
                break;
            }
        }

        int ans = (r-l)+1;
        cout << ans << "\n";
        ans = 0;
    }
    return 0;
}
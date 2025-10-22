/**
 *     DHIP
**/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    int t;
    cin>>t;
    map<string,int>mp;
    while(t--)
    {
        cin>>s;
        mp[s]++;

        if(mp[s]>1)
        {
            cout << s << mp[s]-1 << "\n";
        }
        else
        {
            cout << "OK\n";
        }
    }
    return 0;
}
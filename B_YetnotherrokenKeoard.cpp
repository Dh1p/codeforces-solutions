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
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        map<int,char>mp;
        int idx;
        int n=s.size();
        stack<int> upper,lower;

        for(int i=0; i<n; i++)
        {
            if(s[i]=='B')
            {
                if(!upper.empty())
                {
                    idx = upper.top();
                    mp[idx]='#';
                    upper.pop();
                }
                continue;
            }
            if(s[i]=='b')
            {
                if(!lower.empty())
                {
                    idx = lower.top();
                    mp[idx]='#';
                    lower.pop();
                }
                continue;
            }
            mp[i]=s[i];
            if(isupper(s[i]))
            {
                upper.push(i);
            }
            else
            {
                lower.push(i);
            }
        }
        for(int i=0; i<n; i++)
        {
            if(mp.count(i) && mp[i]!='#')
            {
                cout << mp[i];
            }
        }
        cout << "\n";
    }
    
    return 0;
}
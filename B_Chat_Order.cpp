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
    vector<string>v;
    for(int i=0; i<t; i++)
    {
        string s;
        cin>>s;
        v.push_back(s);
    }
    vector<string>ans;
    set<string>st;

    for(int i = t-1; i>=0; i--)
    {
        if(!st.count(v[i]))
        {
            st.insert(v[i]);
            ans.push_back(v[i]);
        }
    }
    for(string x : ans)
    {
        cout << x << "\n";
    }
    
    return 0;
}
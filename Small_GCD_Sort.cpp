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
        int n;
        cin>>n;
        vector<pair<int,int>>v;
        for(int i=1; i<=n; i++)
        {
            int x = gcd(i,n);
            //cout << x << " ";
            v.push_back({x,i});
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        for(auto it : v )
        {
            cout << it.second << " ";
        }
        cout <<"\n";
    }
    return 0;
}
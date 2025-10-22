/**
 *     DHIP
**/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    vector<string>v;
    for(int i=1; i<=n; i++)
    {
        string s;
        cin>>s;
        v.push_back(s);
    }
    for(int i=0; i<n; i++)
    {
        cout << v[i] << "\n";
    }
    return 0;
}
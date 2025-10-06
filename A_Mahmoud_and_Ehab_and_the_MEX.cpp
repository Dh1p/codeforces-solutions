/**
 *     DHIP
**/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x;
    cin >> n >> x;
    vector<int>v(n);
    for(int i=0; i<n; i++)
        cin >> v[i];

    map<int,int>mp;
    for(int x: v)
    {
        mp[x]++;
    }
    bool xx=(mp[x]!=0);
    int count = 0;
    int last = v.back();
    for(int i=0; i<x; i++)
    {
        if(mp[i]==0)
            count++;
    }
    if(xx)
        cout << count+1 << "\n";
    else
        cout << count << "\n";

    return 0;
}
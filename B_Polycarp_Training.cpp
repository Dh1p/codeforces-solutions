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
    multiset<int>s;
    for(int i=0; i<t; i++)
    {
        int x;
        cin>>x;
        s.insert(x);
    }
    int count = 0;
    for(int i=1; i<=t; i++)
    {
        auto it = s.lower_bound(i);
        if(it!= s.end())
        {
            count++;
            s.erase(it);
        }
    }
    cout << count << "\n";
    return 0;
}
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
    cin >> t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        int count=0;
        for(int i=0; i<n; i++)
        {
            if(v[i]==1)
            {
                count++;
            }
        }
        count/=2;
        int ans = n-count;
        cout << ans <<"\n";
    }
    return 0;
}
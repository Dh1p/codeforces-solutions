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
        int n,x;
        cin>>n>>x;
        int cost=0;
        if(n<=x)
        {
            cout<<0<<"\n";
            continue;
        }
        for(int i = n; i>0; i--)
        {
            if(i==x)
            {
                break;
            }
            cost+=i-x;
        }
        cout << cost << "\n";
    }
    return 0;
}
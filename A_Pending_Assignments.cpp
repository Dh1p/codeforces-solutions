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
        long long int x,y,z;
        cin>>x>>y>>z;

        if(x*y<=z*24*60)
        {
            cout << "YES\n";
        }
        else
        {
            cout <<"NO\n";
        }
    }
    return 0;
}
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
        string s,p;
        cin>>s>>p;
        sort(s.begin(),s.end());
        sort(p.begin(),p.end());
        if(s==p)
        {
            cout<< "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}
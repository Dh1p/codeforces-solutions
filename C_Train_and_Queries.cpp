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

        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        for(int i=0; i<k; i++)
        {
            int a,b;
            cin>>a>>b;
            int x=0,y=n-1;
            int countx=0,county=0;
            while(x<y)
            {
                if(v[x]!=a){
                    x++;
                    countx++;
                }
                if(v[y]!=b){
                    y--;
                    county++;
                }
            }
            if(countx+county==n-1)
            {
                cout <<"NO\n";
            }
            else
            {
                cout << "YES\n";
            }
        }
    }
    return 0;
}
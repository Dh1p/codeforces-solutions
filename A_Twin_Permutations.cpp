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
            cin>>v[i];
        vector<int>v1(n);
        v1=v;
        sort(v1.begin(),v1.end());
        int x = v1.front()+v1.back();

        vector<int>y(n);

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(v1[i]+v[j]==x)
                    y[j]=v1[i];
            }
        }

        for(int i=0; i<n; i++)
        {
            cout << y[i] <<" ";
        }

        cout << "\n";
    }
    return 0;
}
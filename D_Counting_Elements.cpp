/**
 *     DHIP
**/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int>v(n);
    for(int &x :v)
    {
        cin>>x;
    }

    int sum=0;
    for(int i=0; i<n; i++)
    {
        auto it = find(v.begin(),v.end(),(v[i]+1));

        if(it==v.end())
        {
            continue;
        }
        else
        {
            sum+=1;
            //cout<<sum<<" "<<endl;
            continue;
        }
    }

    cout<<sum<<endl;
    
    return 0;
}
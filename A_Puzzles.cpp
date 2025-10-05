/**
 *     DHIP
**/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[m];
    for(int i=0; i<m; i++)
    {
        cin>>a[i];
    }

    sort(a,a+m,greater<int>());

    int sum=0;
    int ans=INT_MAX;
    for(int i=0; i+(n-1)<m; i++)
    {
        sum = a[i]-a[i+(n-1)];
        //cout << sum <<" ";

        if(sum<ans)
        ans=sum;
    }

     cout<<ans<<endl;
    
    return 0;
}
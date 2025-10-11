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
        int n,a,b;
        cin >>n>>a>>b;
        int dis,small_dis=100000000;
        for(int i=0; i<n; i++)
        {
            int x,y;
            cin>>x>>y;
            dis = abs(x-a)+abs(y-b);
            if(dis<small_dis)
            {
                small_dis = dis;
            }
        }
        cout << small_dis <<"\n";
    }
    return 0;
}
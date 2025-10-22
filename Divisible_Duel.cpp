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
        int x,y;
        cin>>x>>y;
        int even=0,odd=0;
        

        for(int i=x; i<=y; i+=x)
        {
            if(i%2==0)
            {
                even+=i;
            }
            else
            {
                odd+=i;
            }
        }
        if(even<odd)
        {
            cout <<"NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
    return 0;
}
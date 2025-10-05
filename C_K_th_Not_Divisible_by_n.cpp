/**
 *     DHIP
**/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        
        int set = a-1;
        int sets_number = b/set;
        int rem = b%set;
        int ans = (sets_number*a)-1;
        if(rem>0)
        {
            ans = ans+rem+1;
        }

        cout<<ans<<endl;
    }
    return 0;
}
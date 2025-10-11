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
        string s;
        cin >> n >>s;
        int i,j;
        i=0, j=n-1;
        int l=-1,r=-1;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='1')
            {
                if(l==-1)
                    l=i;
                r=i;
            }
        }
        if(l==-1)
        {
            cout << 0 << "\n";
            continue;
        }

        int count = 0;
        for(int i=l; i<=r; i++)
        {
            if(s[i]=='0')
            {
                count++;
            }
        }
        cout << count << "\n";
    }
    return 0;
}
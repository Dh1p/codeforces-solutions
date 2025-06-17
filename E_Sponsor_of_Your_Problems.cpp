/**
 *     DHIP
**/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int l,r;
        cin >> l >> r;
        int x;
        if(l==r)
        {
            x=l;
        }
        else
        {
            x=l+2;
        }

        string a = to_string(l);
        string b = to_string(r);
        string c = to_string(x);

        int len_a = a.size();
        int len_b = b.size();
        int len_c = c.size();

        int lx = min(len_a,len_c);
        int xr = min(len_b,len_c);

        int count1=0,count2=0;

        for(int i=0; i<lx; i++)
        {
            if(a[i]==c[i])
            {
                count1++;
            }
        }

        for(int i=0; i<xr; i++)
        {
            if(b[i]==c[i])
            {
                count2++;
            }
        }

        cout << count1+count2 <<endl;
    }
    return 0;
}
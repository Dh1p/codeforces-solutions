/**
 *     DHIP
**/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        int n,s;
        cin >> n >> s;
        int x[n];
        for(int i=0; i<n; i++)
        {
            cin >> x[i];
        }

        int a = abs(s-x[0]);
        int b = abs(s-x[n-1]);

        if(a<b)
        {
            cout << a + (x[n-1]-x[0]) << endl;
        }
        else if(b<a)
        {
            cout << b + (x[n-1]-x[0]) << endl;
        }
        else
        {
            cout << a + (x[n-1]-x[0]) << endl;
        }
    }
    return 0;
}
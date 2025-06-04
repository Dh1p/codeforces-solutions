/**
 *     DHIP
**/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    cin >>test;

    for(int i=0; i<test; i++)
    {
        int n;
        cin >> n;
        int a[2*n];

        for(int j=0; j<2*n; j++)
        {
            cin >> a[j];
        }
        int even=0,odd=0;
        for(int j=0; j<2*n; j++)
        {
            if(a[j]%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }

        if(even==odd)
        {
            cout << "Yes" << endl;
        }
        else 
        {
            cout << "No" << endl;
        }

    }
    return 0;
}
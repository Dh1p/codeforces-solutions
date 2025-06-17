/**
 *     DHIP
**/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >>t;
    for(int i=0; i<t; i++)
    {
        int n;
        cin >>n;
        string a;
        cin >> a;

        // char first=a[0];
        // char last=a[n-1];
        int flag = 0;

        for(int m=1; m <n-1; m++)
        {
            for(int j=0; j<n; j++)
            if(m!=j && a[m]==a[j])
            {
                flag=1;
                break;
            }
        }

        //cout << i << "->" << num << endl;

        if(flag==1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" <<endl;
        }
    }

    return 0;
}
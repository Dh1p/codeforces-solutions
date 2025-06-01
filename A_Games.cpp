/**
 *     DHIP
**/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int b[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i]>>b[i];
        
    }

    int count=0;
    for(int i=0; i<n; i++)
    {
        for(int s=0; s<n; s++)
        {
            if(b[i]==a[s])
            {
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}
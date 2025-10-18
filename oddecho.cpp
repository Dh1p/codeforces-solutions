/**
 *     DHIP
**/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int count = 1;
    while(n--)
    {
        string s;
        cin>>s;
        if(count%2!=0)
        {
            cout << s <<"\n";
        }
        count ++;
    }
    return 0;
}
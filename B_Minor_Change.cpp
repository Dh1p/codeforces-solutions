/**
 *     DHIP
**/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string a,b;
    cin>>a>>b;
    int count = 0;
    for(int i=0; i<a.size(); i++)
    {
        if(a[i]!=b[i])
        {
            count ++;
        }
    }
    cout << count << "\n";
    return 0;
}
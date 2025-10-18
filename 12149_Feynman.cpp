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
    long long int sum = 0;
    while(1)
    {
        cin >> n;
        if(n==0)
            break;

        for(int i=1;i<=n;i++)
        {
            sum+=i*i;
        }
        cout << sum << "\n" ;
        sum=0;
    }
    
    return 0;
}
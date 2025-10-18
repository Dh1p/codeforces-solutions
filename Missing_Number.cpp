/**
 *     DHIP
**/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n;
    cin >> n;
    long long sum = 0;
    for(int i=0; i<n-1; i++)
    {
        long long int x;
        cin >> x;
        sum+=x;
    }
    long long int totalSum = (n*(n+1))/2;
    cout << totalSum - sum << "\n";    
    return 0;
}
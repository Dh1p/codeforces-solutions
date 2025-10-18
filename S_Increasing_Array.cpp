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
    long long int sum = 0;
    long long int prev,curr;
    cin >> prev;
    for(int i=1;i<n;i++)
    {
        cin >>curr;
        if(curr<prev)
            sum += prev - curr;
        prev = max(curr,prev);
    }
    cout << sum << "\n";
    return 0;
}
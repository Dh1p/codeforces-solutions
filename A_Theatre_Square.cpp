/**
 *     DHIP
**/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n,m,a;
    cin>>n>>m>>a;
    long long int fl1 = ceil((double)n/a);
    long long int fl2 = ceil((double)m/a);
    cout << fl1*fl2 << "\n";
    return 0;
}
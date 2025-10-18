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
    cin >> n;
    float QALY = 0;
    while(n--)
    {
        float q,y;
        cin >> q >>y;

        QALY += q*y; 
    }
    cout << fixed << setprecision(3) << QALY << "\n";

    return 0;
}
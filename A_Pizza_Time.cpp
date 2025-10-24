/**
 *     DHIP
 **/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long int div = 0, hao = 0;
        while (n > 2)
        {
            div = n / 3;
            hao += div;
            n = div + (n % 3);
        }
        cout << hao << "\n";
    }
    return 0;
}
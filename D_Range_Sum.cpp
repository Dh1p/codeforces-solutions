/**
 *     DHIP
 **/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b;
        cin >> a >> b;

        if(a>b)
        {
            swap(a,b);
        }

        long long int sum = (((b - a) + 1) * a) + ((b-a) * (((b-a) + 1)) / 2);

        cout << sum << endl;
    }

    return 0;
}
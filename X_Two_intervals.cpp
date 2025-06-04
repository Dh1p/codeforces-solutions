/**
 *     DHIP
 **/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int l1, r1, l2, r2, a, b;
    cin >> l1 >> r1 >> l2 >> r2;

    if (l2 > r1 || r2 < l1)
    {
        cout << "-1" << endl;
    }
    else if(r1==l2)
    {
        cout << r1 << " " << l2 << endl;
    }
    else
    {
        if (l1 < l2)
        {
            a = l2;
        }
        else
        {
            a = l1;
        }
        if (r1 < r2)
        {
            b = r1;
        }
        else
        {
            b = r2;
        }

        cout << a << " " << b << endl;
    }

    return 0;
}
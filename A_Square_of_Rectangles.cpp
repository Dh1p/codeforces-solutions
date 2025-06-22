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
        int l1, l2, l3, l4, l5, l6;
        cin >> l1 >> l2 >> l3 >> l4 >> l5 >> l6;

        if (l1 == l3 && l1 == l5)
        {
            if (l2 != l4 && l2 != l6)
            {
                int sum = l2 + l4 + l6;
                if (sum == l1)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
            else if (l2 == l4 && l2 != l6)
            {
                int sum = l2 + l6;
                if (sum == l1)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
            else if (l2 != l4 && l2 == l6)
            {
                int sum = l2 + l4;
                if (sum == l1)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
        }
        else if (l1 == l3 && l3 != l5)
        {
            int sum = l1 + l5;
            if (l2 != l4 && l2 != l6)
            {
                int mx = max({l2, l4, l5});
                if (sum == mx && (l2 + l4 + l6 - mx) == mx)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
            else if (l2 == l4 && l2 != l6)
            {
                int sum1 = l2 + l6;
                if (sum == sum1)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
            else if (l2 == l4 && l2 == l6)
            {
                if (sum == l2)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
        }
        else if (l5 == l3 && l1 != l5)
        {
            int sum = l1 + l5;
            if (l2 != l4 && l2 != l6)
            {
                int mx = max({l2, l4, l5});
                if (sum == mx && (l2 + l4 + l6 - mx) == mx)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
            else if (l2 == l4 && l2 != l6)
            {
                int sum1 = l2 + l6;
                if (sum == sum1)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
            else if (l2 == l4 && l2 == l6)
            {
                if (sum == l2)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
        }
        else if (l1 != l3 && l1 != l5)
        {
            int sum = l1 + l3 + l5;
            int mx = max({l2, l4, l6});
            int sum1 = l2 + l4 + l6;

            if (l2 != l4 && l2 != l6)
            {
                if (sum == mx && (sum1 - mx) == mx)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
            else if (l2 == l4 && l2 != l6)
            {
                int sum1 = l2 + l6;
                if (sum == sum1)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
            else if (l2 == l4 && l2 == l6)
            {
                if (sum == l2)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
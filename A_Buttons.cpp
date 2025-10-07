/**
 *     DHIP
 **/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    if(a==b)
    {
        cout << a*2 << "\n";
        return 0;
    }
    int num=0;
    for (int i = 0; i < 2; i++)
    {
        if (a > b)
        {
            num += a;
            a--;
        }
        else if (b > a)
        {
            num += b;
            b--;
        }
        else
        {
            num += a;
        }
    }
    cout << num << "\n";
    return 0;
}
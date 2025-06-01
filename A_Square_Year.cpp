/**
 *     DHIP
 **/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int fl=1;
        cin >> a;

        for (int i = 0; i <= 100; i++)
        {
            for (int j = 0; j <= 100; j++)
            {
                if (((i + j) * (i + j)) == a)
                {
                    cout << i << " " << j << endl;
                    fl = -1;
                    break;
                }
            }
            if (fl == -1)
            {
                break;
            }
        }

        if(fl==1)
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}
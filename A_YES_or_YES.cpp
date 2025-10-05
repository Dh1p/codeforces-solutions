/**
 *     DHIP
**/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >>n;

    while(n--)
    {
        string a;
        cin >>a;

        if(a=="YES" || a=="YEs" || a=="Yes" || a =="yes" || a=="yES" || a=="yeS" || a=="YeS" || a=="yEs")
        {
            cout << "YES" <<endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
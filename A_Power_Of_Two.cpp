/**
 *     DHIP
**/
#include<bits/stdc++.h>

using namespace std;


bool powoftwo(long long int n)
{
    while(n>1)
    {
        if(n%2!=0)
        {
            return false;
        }

        n/=2;
    }

    return true;
}

int main()
{
    long long int n;
    cin >> n;
    if(powoftwo(n))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    
    return 0;
}
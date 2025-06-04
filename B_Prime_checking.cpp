/**
 *     DHIP
**/
#include<bits/stdc++.h>

using namespace std;

bool prime(long long int n)
{
    if(n==1)
        return false;
    else if(n==2)
        return true;
    else if(n%2==0)
        return false;

    for(long long int i=3; i*i<=n; i+=2)
    {
        if(n%i==0)
            return false;
    }

    return true;
}

int main()
{
    long long int n;
    cin >> n;

    if(prime(n))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
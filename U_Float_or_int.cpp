/**
 *     DHIP
**/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    double n;
    cin >>n;
    int a = n;
    double b = n-a;

    if(b==0)
    {
        cout << "int "<< a << " " << endl;
    }
    else
    {
        cout << "float " << a << " " << b << endl;
    }

    return 0;
}
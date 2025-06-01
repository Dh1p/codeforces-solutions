/**
 *     DHIP
**/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,d;
    char c,f;
    cin >> a >> c >> b >> f >> d;

    //cout <<a << " " <<c << " " <<b << " "<<d;

    if(c=='+')
    {
        if(a+b==d)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << a+b << endl;
        }
    }
    else if(c=='-')
    {
        if(a-b==d)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << a-b << endl;
        }
    }
    else if(c=='*')
    {
        if(a*b==d)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << a*b << endl;
        }
    }
    return 0;
}
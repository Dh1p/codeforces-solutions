/**
 *     DHIP
**/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >>n;
    for(int i=0; i<n; i++)
    {
        int a,b;
        cin >>a>>b;
        if(a==b)
        {
            cout << "Square" << endl;
        }
        else
        {
            cout << "Rectangle" << endl;
        }
    }
    return 0;
}
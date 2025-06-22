/**
 *     DHIP
**/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string a,b;
    cin >>a>>b;

    int sum = (a[a.size()-1]-'0') + (b[b.size()-1]-'0');

    cout << sum << endl;

    return 0;
}
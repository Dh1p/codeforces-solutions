/**
 *     DHIP
**/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    int d = abs(a-b) + abs(a-c);
    int e = abs(b-a) + abs(b-c);
    int f = abs(c-a) + abs(c-b);

    int g = min({d,e,f});

    cout<<g<<endl;

    return 0;
}
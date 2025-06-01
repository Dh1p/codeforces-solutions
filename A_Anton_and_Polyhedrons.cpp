/**
 *     DHIP
**/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string a;
    long long int count = 0;

    for(int i=0; i<n; i++)
    {
        cin>>a;

        if(a == "Tetrahedron")
        {
            count+=4;
        }
        else if(a == "Icosahedron")
        {
            count+=20;
        }
        else if(a == "Cube")
        {
            count+=6;
        }
        else if(a == "Dodecahedron")
        {
            count+=12;
        }
        else if(a == "Octahedron")
        {
            count+=8;
        }
    }

    cout << count << endl;

    return 0;
}
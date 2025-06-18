/**
 *     DHIP
**/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    int count = 0;

    for(int i=0; i<a; i++)
    {
        if(i%2!=0)
        {
            count++;
        }
        for(int j=0; j<b; j++)
        {
            if(i%2==0)
            {
                cout<<"#";
            }
            else
            {  
                if(count%2!=0 && j==b-1)
                {
                    cout << "#";
                }
                else if(count%2==0 && j==0)
                {
                    cout << "#";
                }
                else
                {
                    cout << ".";
                }
            }
        }

        cout << endl;
    }

    return 0;
}
/**
 *     DHIP
**/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long int a,b,sum=0,sum_even=0,sum_odd=0;
    cin >>a>>b;

    if(b<a)
    {
        swap(a,b);
    }
     //cout << a << b << endl;
    for(int i=a; i<=b; i++)
    {
        sum+=i;

        if(i%2==0)
        {
            sum_even+=i;
        }
        else
        {
            sum_odd+=i;
        }
    }

    cout << sum << endl << sum_even << endl << sum_odd << endl;
    return 0;
}
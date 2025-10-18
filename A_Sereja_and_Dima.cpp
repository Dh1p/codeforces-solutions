/**
 *     DHIP
**/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int>v(n);

    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }

    int sereja=0,dima=0;
    int card;
    int l=0,r=n-1;
    bool b = true;
    while(l<=r)
    {
        if(v[l]>v[r])
        {
            card = v[l];
            l++;
        }
        else
        {
            card = v[r];
            r--;
        }

        if(b)
            sereja += card;
        else
            dima += card;
        b=!b;
    }
    
    cout << sereja << " " << dima << "\n";

    return 0;
}
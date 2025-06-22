/**
 *     DHIP
**/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int s,n;
    cin>>s>>n;
    
    vector<int>arr(n);
    vector<int>arr1(n);

    for(int i=0; i<n; i++)
    {
        cin>>arr[i]>>arr1[i];
    }

    int i=0;
    while(i<n)    
    {
        if(s>arr[i])
        {
            s=s+arr1[i];
            arr.erase(arr.begin()+i);
            arr1.erase(arr1.begin()+i);
            i=0;
        }
        else
        {
            i++;
        }

        for(int val : arr)
        {
            cout << val << " ";
        }
    }
    return 0;
}
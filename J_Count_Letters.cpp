/**
 *     DHIP
**/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string a;
    cin>>a;

    vector<int>fre(26);

    for(int i=0; i<a.size(); i++)
    {
        fre[a[i]-'a']++;
    }

    for(int i=0; i<26; i++)
    {
        if(fre[i]!=0)
        cout<<char(i+'a')<<" "<<":"<<" "<<fre[i]<<endl;
    }
    return 0;
}
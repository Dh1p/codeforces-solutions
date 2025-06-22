/**
 *     DHIP
**/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string a,b,c;
    cin >>a>>b>>c;
    string d = a+b;

    int fre[26]={0};
    int fre1[26]={0};
    for(int i=0; i<d.size(); i++)
    {
        fre[d[i]-'A']++;
    }

    for(int i=0; i<c.size(); i++)
    {
        fre1[c[i]-'A']++;
    }

    int flag=0;
    for(int i=0; i<26; i++)
    {
        if(fre[i]!=fre1[i])
        {
            flag=1;
            break;
        }
    }

    if(flag==1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
    return 0;
}
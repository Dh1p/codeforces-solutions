/**
 *     DHIP
**/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    char a[1001];
    cin.getline(a,1001);

    int fre[26]={0};

    for(int i=0; a[i]!='\0'; i++)
    {
        if(a[i]>='a' && a[i]<='z')
        {
            fre[a[i]-'a']++;
        }
    }

    int count = 0;
    for(int i=0; i<26; i++)
    {
        if(fre[i]>0)
        {
            count++;
        }
    }

    cout<<count<<endl;
    return 0;
}
/**
 *     DHIP
 **/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a;
    cin >> a;
    string b;
    b=a;
    int flag=0;

    if(a[0] >= 'a' && a[0] <= 'z')
    {
        //first charecter choto hole check korbe baki gula capital kina, hole change korbe
        a[0]=a[0]-32;//prothom charecter change kore boro kora hoise
        for (int i = 1; i < a.size(); i++)
        {
            if(a[i]>='A' && a[i]<='Z')
            {
                a[i]=a[i]+32;
            }
            else//jodi koyekta capital paoar pore small paoa jay tahole input tai print kora hoise
            {
                cout << b << endl;
                flag=1;
                break;
            }
        }
    }
    else if(a[0] >= 'A' && a[0] <= 'Z')//prothom ta capirtal hole check korbe baki gulao capital kina
    {
        a[0]=a[0]+32;//prothom charecter small kora hoise
        for (int i = 1; i < a.size(); i++)
        {
            if(a[i]>='A' && a[i]<='Z')// baki gulao capital hole small kora hoise
            {
                a[i]=a[i]+32;
            }
            else//jodi shob capital na hoy tahole input print
            {
                cout << b << endl;
                flag=1;
                break;
            }
        }
    }
   
    if(flag==0)
    cout << a << endl;

    return 0;
}
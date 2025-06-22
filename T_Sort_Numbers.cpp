/**
 *     DHIP
 **/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int arr[3];
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;
    int arr1[3];

    for(int i=0; i<3 ; i++)
    {
        arr1[i]=arr[i];
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }

    for (int j = 0; j < 3; j++)
    {
        cout << arr[j] << endl;
    }

    cout << endl;

    for (int j = 0; j < 3; j++)
    {
        cout << arr1[j] << endl;
    }

    return 0;
}
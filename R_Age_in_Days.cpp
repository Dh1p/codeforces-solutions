/**
 *     DHIP
**/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >>n;

    int years, months, days, num;

    years = n/365;

    cout << years << " " << "years" << endl;

    n-=365*years;

    months = n/30;

    cout << months << " " << "months" <<endl;

    n-=30*months;

    cout << n << " " << "days" << endl;

    return 0;
}
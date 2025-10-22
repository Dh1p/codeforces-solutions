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
    string s;
    cin >> s;

    map<string, int> freq;

    for (int i = 0; i < n - 1; i++) {
        string two = s.substr(i, 2);
        freq[two]++;
    }

    string ans;
    int max = 0;
    for (auto p : freq) {
        if (p.second > max) {
            max = p.second;
            ans = p.first;
        }
    }

    cout << ans << "\n";
    return 0;
}
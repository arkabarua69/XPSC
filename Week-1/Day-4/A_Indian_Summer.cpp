#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
int main()
{
    int t;
    cin >> t;
    map<string, int> mp;
    int ans = 0;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        if (!mp[s])
            ans++;
        mp[s] = 1;
    }
    cout << ans << nl;
}
/*Code by Gunjon*/
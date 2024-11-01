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
    vector<string> v;
    while (t--)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (mp[v[i]] == 1)
            continue;
        else
        {
            cout << v[i] << nl;
            mp[v[i]] = 1;
        }
    }
}
/*Code by Gunjon*/
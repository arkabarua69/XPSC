#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
int main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        map<char, vector<int>> mp;
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            mp[s[i]].push_back(i + 1);
        }
        ll c = abs(((s[0] - 'a') + 1) - ((s[n - 1] - 'a') + 1));
        vector<int> v;
        int i = (s[0] > s[n - 1]) ? -1 : 1;
        for (char ch = s[0]; ch != s[n - 1] + i; ch += i)
        {
            for (auto e : mp[ch])
                v.push_back(e);
        }
        cout << c << " " << v.size() << nl;
        for (auto e : v)
            cout << e << " ";
        cout << nl;
    }
}
/*Code by Gunjon*/
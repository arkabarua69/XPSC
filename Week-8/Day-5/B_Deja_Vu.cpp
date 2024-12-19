#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define it(_) (_).begin(), (_).end()
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
#define Speed_code               \
    ios::sync_with_stdio(false); \
    cin.tie(0);
void GunJon()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n), x;
    for (auto &it : v)
        cin >> it;
    map<int, int> mp;
    for (int i = 0; i < q; i++)
    {
        int p;
        cin >> p;
        if (mp[p] == 0)
            x.push_back(p);
        mp[p] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < x.size(); j++)
        {
            int f = 1LL << x[j];
            (v[i] % f == 0) ? v[i] += (f / 2) : 0;
        }
    }
    for (auto it : v)
        cout << it << " ";
    cout << nl;
}
int main()
{
    Speed_code;
    int $;
    cin >> $;
    while ($--)
        GunJon();
}
/*Code by Gunjon*/
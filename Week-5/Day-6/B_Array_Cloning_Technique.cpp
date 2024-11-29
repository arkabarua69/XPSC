#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
void GunJon()
{
    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int v;
        cin >> v;
        mp[v]++;
    }
    int mx = 0;
    for (auto &[v, x] : mp)
        mx = max(mx, x);

    int ans = 0;
    while (mx < n)
    {
        int a = min(n - mx, mx);
        ans += 1 + a;
        mx += a;
    }
    cout << ans << nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        GunJon();
    }
}
/*Code by Gunjon*/
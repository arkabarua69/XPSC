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
    vector<int> v(n + 1);
    ll ans = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        ans += v[i];
    }
    cout << ans - 2 * v[n - 1] << nl;
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
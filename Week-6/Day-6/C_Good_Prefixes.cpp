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
    ll sum = 0,
       m = INT_MIN,
       ans = 0,
       $;
    for (int i = 0; i < n; i++)
    {
        cin >> $;
        m = max($, m);
        sum += $;
        if (sum - m == m)
            ans++;
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
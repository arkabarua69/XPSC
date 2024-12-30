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
const int maxN(1e5 + 10);
void GunJon()
{
    int n, a, v[maxN];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v, v + n);
    cin >> a;
    while (a--)
    {
        int x;
        cin >> x;
        const int ans = upper_bound(v, v + n, x) - v;
        cout << ans << nl;
    }
}
int main()
{
    Speed_code;
    // int $;
    // cin >> $;
    // while ($--)
    GunJon();
}
/*Code by Gunjon*/
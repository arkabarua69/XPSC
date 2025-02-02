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
const int N = 1e5 + 5;
ll a[N], arr[N];
int l[N], r[N], d[N], x[N], y[N], q[N], n, m, k;
void GunJon()
{
    cin >> n >> m >> k;
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < m; ++i)
    {
        cin >> l[i] >> r[i] >> d[i];
        l[i]--;
        r[i]--;
    }
    memset(q, 0, sizeof(q));
    memset(arr, 0, sizeof(arr));
    for (int i = 0; i < k; ++i)
    {
        int xx, yy;
        cin >> xx >> yy;
        q[xx - 1]++;
        q[yy]--;
    }
    int bb = 0;
    for (int i = 0; i < m; ++i)
    {
        bb += q[i];
        arr[l[i]] += 1LL * bb * d[i];
        arr[r[i] + 1] -= 1LL * bb * d[i];
    }
    ll aa = 0;
    for (int i = 0; i < n; ++i)
    {
        aa += arr[i];
        a[i] += aa;
        cout << a[i] << " ";
    }
    cout << nl;
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
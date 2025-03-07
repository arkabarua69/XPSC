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

    int n;
    cin >> n;
    vector<ll> a(n);
    ll sum = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        sum += a[i];
    }
    if (n <= 2)
    {
        cout << -1 << nl;
        return;
    }
    sort(it(a));
    ll p = 0;
    for (int i = 0; i < n; ++i)
    {
        if ((i + 1) * 2 > n)
        {
            p = a[i];
            break;
        }
    }
    cout << max(0LL, 2LL * n * p - sum + 1) << nl;
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
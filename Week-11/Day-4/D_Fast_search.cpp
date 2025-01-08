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
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(it(v));
    int q;
    cin >> q;
    while (q--)
    {
        ll r, l;
        cin >> r >> l;
        ll lo = 0, hi = n - 1;
        while (lo <= hi)
        {
            ll mid = (hi + lo) / 2;
            if (v[mid] <= l)
                lo = mid + 1;
            else
                hi = mid - 1;
        }
        ll a1 = lo;
        lo = 0, hi = n - 1;
        while (lo <= hi)
        {
            ll mid = (hi + lo) / 2;
            if (v[mid] >= r)
                hi = mid - 1;
            else
                lo = mid + 1;
        }
        cout << a1 - lo << ' ';
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
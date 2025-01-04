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
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(it(v));
    while (k--)
    {
        ll val;
        cin >> val;
        int lo = 0, hi = n - 1;
        bool found = false;

        while (lo <= hi)
        {
            int mid = (hi + lo) / 2;
            if (v[mid] == val)
            {
                found = true;
                break;
            }
            if (v[mid] > val)
            {
                hi = mid - 1;
            }
            else
            {
                lo = mid + 1;
            }
        }

        if (found)
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
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
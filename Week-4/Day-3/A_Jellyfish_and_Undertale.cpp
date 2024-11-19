#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, n;
        cin >> a >> b >> n;
        ll c = b;
        ll ans = b;

        vector<ll> v;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;

            v.push_back(x);
        }

        for (auto &e : v)
            ans += min(e, a - 1);

        cout << ans << endl;
    }
}
/*Code by Gunjon*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
// void GunJon()
// {

// }
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        // GunJon();
        int n;
        cin >> n;
        vector<ll> v(n);
        ll sum = 0;

        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
            sum ^= v[i];
        }

        ll ans = sum;
        for (int i = 0; i < n; ++i)
        {
            ans = min(ans, sum ^ v[i]);
        }

        cout << ans << nl;
    }
}
/*Code by Gunjon*/
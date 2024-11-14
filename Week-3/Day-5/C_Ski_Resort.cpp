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
        int n, k, q;
        cin >> n >> k >> q;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        ll ans = 0;
        int x = 0;

        for (int i = 0; i < n; i++)
        {
            if (v[i] <= q)
                x++;

            else
            {

                if (x >= k)
                {
                    ll cnt = x - k + 1;
                    ans += (cnt * (cnt + 1)) / 2;
                }
                x = 0;
            }
        }

        if (x >= k)
        {
            ll cnt = x - k + 1;
            ans += (cnt * (cnt + 1)) / 2;
        }

        cout << ans << nl;
    }
}
/*Code by Gunjon*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
        }

        ll ans = 0;
        int mi = 0;
        bool f = false;

        for (int i = 0; i < n; ++i)
        {
            if (v[i] > 0)
            {
                ans += v[i];
                f = false;
            }
            else if (v[i] < 0)
            {
                ans += -v[i];
                if (!f)
                {
                    mi++;
                    f = true;
                }
            }
        }

        cout << ans << " " << mi << nl;
    }
}
/*Code by Gunjon*/
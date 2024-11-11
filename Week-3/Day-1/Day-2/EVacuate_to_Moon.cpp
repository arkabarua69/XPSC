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

    int t;
    cin >> t;

    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;

        vector<int> v(n), v1(a);
        for (int &c : v)
            cin >> c;
        for (int &e : v1)
            cin >> e;

        sort(v.rbegin(), v.rend());
        sort(v1.rbegin(), v1.rend());
        ll ans = 0;
        for (int i = 0; i < min(n, a); i++)
        {
            ans += min((ll)v[i], (ll)v1[i] * b);
        }

        cout << ans << nl;
    }
}
/*Code by Gunjon*/
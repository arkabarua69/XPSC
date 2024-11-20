#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
int main()
{
    int n;
    ll m;
    cin >> n >> m;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll sum = 0, ans = INT_MAX, l = 0, r = 0;
    while (r < n)
    {
        sum += v[r];
        while (sum >= m)
        {
            ans = min(ans, r - l + 1);
            sum -= v[l];
            l++;
        }

        r++;
    }
    (ans == INT_MAX) ? cout << -1 << nl : cout << ans << nl;
}
/*Code by Gunjon*/
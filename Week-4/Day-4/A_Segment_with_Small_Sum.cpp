#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
int main()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll sum = 0, ans = 0, l = 0, r = 0;
    while (r < n)
    {
        sum += v[r];
        if (sum <= m)
            ans = max(ans, r - l + 1);
        else
        {
            sum -= v[l];
            l++;
        }
        r++;
    }
    cout << ans << nl;
}
/*Code by Gunjon*/

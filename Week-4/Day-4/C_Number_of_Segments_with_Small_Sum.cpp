#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
int main()
{
    int n;
    ll s;
    cin >> n >> s;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    ll sum = 0, ans = 0, l = 0, r = 0;
    while (r < n)
    {
        sum += v[r];

        while (sum > s)
        {
            sum -= v[l];
            l++;
        }
        ans += (r - l + 1);
        r++;
    }

    cout << ans << nl;
}
/*Code by Gunjon*/
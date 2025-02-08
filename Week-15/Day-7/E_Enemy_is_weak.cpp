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

    int n;
    cin >> n;
    vector<int> a(n), b(n);
    vector<vector<ll>> v(4, vector<ll>(n + 1, 0));

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = -a[i];
    }

    sort(it(b));
    for (int i = 0; i < n; i++)
        a[i] = lower_bound(it(b), -a[i]) - b.begin() + 1;

    auto mod = [&](int i, int j, long long k)
    {
        while (j <= n)
        {
            v[i][j] += k;
            j = (j | (j - 1)) + 1;
        }
    };

    auto ans = [&](int ind, int j)
    {
        ll x = 0;
        while (j)
        {
            x += v[ind][j];
            j = (j & (j - 1));
        }
        return x + (!ind);
    };

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= 3; j++)
            mod(j, a[i], ans(j - 1, a[i] - 1));
    }

    cout << ans(3, n) << nl;
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
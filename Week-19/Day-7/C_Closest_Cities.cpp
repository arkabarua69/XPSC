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
    vector<int> a(n);
    for (int &x : a)
        cin >> x;
    int q;
    cin >> q;
    vector<pair<int, int>> v(q);
    vector<ll> ans(q);
    for (auto &[i, j] : v)
    {
        cin >> i >> j;
        i--, j--;
    }
    for (int rot = 0; rot < 2; rot++)
    {
        vector<ll> pref(n);
        for (int i = 1; i < n; i++)
        {
            pref[i] = pref[i - 1];
            if (i == 1 || a[i] - a[i - 1] < a[i - 1] - a[i - 2])

                pref[i] += a[i] - a[i - 1] - 1;
        }

        for (int it = 0; it < q; it++)
        {
            auto [i, j] = v[it];
            if (i <= j)

                ans[it] = a[j] - a[i] - (pref[j] - pref[i]);
        }

        reverse(it(a));
        for (auto &x : a)
            x *= -1;

        for (auto &[i, j] : v)
        {
            i = n - 1 - i;
            j = n - 1 - j;
        }
    }

    for (auto x : ans)
        cout << x << nl;
}
int main()
{
    Speed_code;
    int $;
    cin >> $;
    while ($--)
        GunJon();
}
/*Code by Gunjon*/
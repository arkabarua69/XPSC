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
    string s;
    cin >> n >> s;
    vector<vector<int>> v(26);
    for (int i = n; i--;)
        v[s[i] - 'a'].push_back(i);
    reverse(it(s));
    vector<ll> a(n + 1);
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        int c = s[i] - 'a';
        int j = v[c].back();
        ll x = 0;
        v[c].pop_back();
        for (int k = n - j; k; k -= k & -k)
            x += a[k];
        for (int k = n - j; k <= n; k += k & -k)
            a[k]++;
        ans += abs(x + j - i);
    }
    cout << ans << nl;
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
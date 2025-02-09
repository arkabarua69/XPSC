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
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    vector<int> v(n + 1, 0);
    auto get = [&](int i)
    {
        int sum = 0;
        while (i > 0)
            sum += v[i], i -= i & -i;

        return sum;
    };
    auto x = [&](int i)
    {
        while (i <= n)
            v[i] += 1, i += i & -i;
    };
    ll ans = 0;
    for (int i = n - 1; i >= 0; --i)
    {
        ans += get(a[i]);
        x(a[i]);
    }
    cout << ans << nl;
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
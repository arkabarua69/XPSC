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
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    if (n == 1)
    {
        cout << 0 << nl;
        return;
    }
    bool f = true;
    ll ans = 0;
    function<int(int, int)> fun = [&](int l, int r)
    {
        if (l == r)
            return v[l];

        int m = (l + r) >> 1;
        int left = fun(l, m);
        int right = fun(m + 1, r);
        if (left > right)
            ans++;

        if (abs(left - right) != (r - l + 1) / 2)
            f = false;
        return max(left, right);
    };
    fun(0, n - 1);
    cout << ((f) ? ans : -1) << nl;
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
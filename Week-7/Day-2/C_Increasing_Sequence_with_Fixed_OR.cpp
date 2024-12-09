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
    ll n;
    cin >> n;
    vector<ll> v;
    for (int i = 0; i <= 60; ++i)
        if ((1LL << i) & n)
            v.push_back(i);
    if (v.size() == 1)
        cout << 1 << nl << n << nl;
    else
    {
        vector<ll> ans;
        ans.push_back(n);
        for (auto x : v)
        {
            ll num = (1LL << x);
            ans.push_back(n - num);
        }
        sort(it(ans));
        cout << ans.size() << nl;
        for (auto x : ans)
            cout << x << " ";
        cout << endl;
    }
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
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
const int N = 2e5 + 10;
void GunJon()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    unordered_map<ll, ll> mp;
    ll presum = 0, cnt = 0;
    mp[0] = 1;
    for (auto e : v)
    {
        presum += e;
        ll rem = ((presum % n) + n) % n;
        if (mp.find(rem) != mp.end())
        {
            cnt += mp[rem];
        }
        mp[rem]++;
    }
    cout << cnt << nl;
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
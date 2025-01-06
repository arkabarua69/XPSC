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
    ll n, x;
    cin >> n >> x;
    vector<ll> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    map<ll, ll> preSum;
    ll cur = 0;
    ll count = 0;
    preSum[0] = 1;
    for (ll num : arr)
    {
        cur += num;
        if (preSum.find(cur - x) != preSum.end())
        {
            count += preSum[cur - x];
        }
        preSum[cur]++;
    }

    cout << count << nl;
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
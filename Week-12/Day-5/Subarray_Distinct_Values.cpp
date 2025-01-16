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
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    unordered_map<ll, ll> mp;
    ll i = 0, j = 0, cnt = 0;
    while (j < n)
    {
        mp[v[j]]++;
        while (mp.size() > k)
        {
            mp[v[i]]--;
            if (mp[v[i]] == 0)
            {
                mp.erase(v[i]);
            }
            i++;
        }
        cnt += (j - i + 1);
        j++;
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
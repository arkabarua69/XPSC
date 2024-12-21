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
    ll n, m;
    cin >> n >> m;
    ll sum = 0;
    vector<ll> v(n);
    for (auto &x : v)
    {
        cin >> x;
        sum += x;
    }
    ll sum1 = n * (n + 1) / 2;
    v.push_back(sum1 - sum);
    m = m % (n + 1);
    for (int i = 0; i < n; i++)
    {
        cout << v[(i - m + n + 1) % (n + 1)] << " ";
    }
    cout << nl;
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
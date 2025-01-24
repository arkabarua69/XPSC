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
    int n, k;
    cin >> n >> k;
    ll ans = 0;
    vector<int> v(n);
    for (auto &x : v)
        cin >> x;
    sort(it(v));
    reverse(it(v));
    for (auto &x : v)
    {
        k -= x;
        if (k < 0)
        {
            k += x;
            cout << k << nl;
            return;
        }
    }
    cout << k << nl;
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
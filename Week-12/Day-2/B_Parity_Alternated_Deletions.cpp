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
    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    vector<int> v, a;
    for (int i = 0; i < n; i++)
        (ar[i] % 2) ? v.push_back(ar[i]) : a.push_back(ar[i]);
    int x = v.size(), y = a.size();
    sort(it(v));
    sort(it(a));
    ll ans = 0;
    if (x > y)
        for (int i = 0; i < x - y - 1; i++)
            ans += v[i];
    else if (y > x)
        for (int i = 0; i < y - x - 1; i++)
            ans += a[i];
    cout << ans << endl;
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
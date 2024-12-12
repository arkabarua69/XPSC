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
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> v(a + 2);
    for (int i = 1; i <= a + 1; ++i)
        cin >> v[i];
    int x = v[a + 1], ans = 0;
    for (int i = 1; i <= a; ++i) (__builtin_popcount(x ^ v[i]) <= b) ? ans++ : 0;
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
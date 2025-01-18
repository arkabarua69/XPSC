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

    int n, m;
    cin >> n >> m;
    int a[m];
    for (int &x : a)
        cin >> x;
    sort(a, a + m, greater<int>());
    int ans = 0;
    for (int i = 1; i < m; i++)
        ans += a[i] - 1 + a[i];
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
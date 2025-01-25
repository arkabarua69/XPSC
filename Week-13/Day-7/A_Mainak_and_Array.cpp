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
const int N = 1e6 + 7;
int n, a[N];
void GunJon()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    int ans = a[n] - a[1];
    for (int i = 1; i <= n - 1; i++)
    {
        ans = max(ans, a[i] - a[i + 1]);
        ans = max(ans, a[n] - a[i]);
        ans = max(ans, a[i + 1] - a[1]);
    }
    cout << ans << '\n';
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
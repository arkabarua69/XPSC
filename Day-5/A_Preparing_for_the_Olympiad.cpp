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
    vector<int> v(n), a(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    vector<int> dp(n + 1, INT_MIN);
    dp[0] = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = i; j >= 0; --j)
        {
            int x = (i + 1 < n) ? a[i + 1] : 0;
            dp[j + 1] = max(dp[j + 1], dp[j] + v[i] - x);
        }
    }
    int ans = *max_element(it(dp));
    cout << ans << endl;
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
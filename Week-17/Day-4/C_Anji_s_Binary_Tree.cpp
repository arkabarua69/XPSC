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
    string s;
    cin >> n >> s;
    s = " " + s;
    vector<int> l(n + 1), r(n + 1), dp(n + 1, 0);
    for (int i = 1; i <= n; ++i)
        cin >> l[i] >> r[i];
    function<void(int)> dfs = [&](int u)
    {
        if (!u)
            return;
        if (l[u] == 0 && r[u] == 0)
            return;
        dfs(l[u]);
        dfs(r[u]);
        if (s[u] == 'L')
            dp[u] = min(dp[l[u]], dp[r[u]] + 1);
        else if (s[u] == 'R')
            dp[u] = min(dp[l[u]] + 1, dp[r[u]]);
        else
            dp[u] = min(dp[l[u]], dp[r[u]]) + 1;
    };
    dp[0] = 1e9;
    dfs(1);
    cout << dp[1] << nl;
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
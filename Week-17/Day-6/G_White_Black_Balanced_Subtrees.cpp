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
    vector<int> v[n + 1];
    int a[n + 1];
    string s;
    for (int i = 2; i <= n; i++)
    {
        cin >> a[i];
        v[a[i]].push_back(i);
    }
    cin >> s;
    int ans = 0;
    vector<int> f(n + 1, 0);

    function<void(int)> dfs = [&](int x)
    {
        f[x] = (s[x - 1] == 'B') ? 1 : -1;
        for (int y : v[x])
        {
            dfs(y);
            f[x] += f[y];
        }
        if (f[x] == 0)
            ++ans;
    };

    dfs(1);
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
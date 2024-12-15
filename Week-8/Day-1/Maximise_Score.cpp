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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
            ans = abs(v[i] - v[i + 1]);
        else if (i == n - 1)
            ans = min(ans, abs(v[i] - v[i - 1]));
        else
            ans = min(ans, max(abs(v[i] - v[i - 1]), abs(v[i] - v[i + 1])));
    }
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
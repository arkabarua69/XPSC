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
    vector<pair<int, int>> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (v.empty() || v.back().first != x)
            v.emplace_back(x, 1);
        else
            v.back().second++;
    }
    int ans = 0;
    for (int i = 1; i < v.size(); i++)
        ans = max(ans, min(v[i - 1].second, v[i].second));
    cout << 2 * ans << '\n';
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
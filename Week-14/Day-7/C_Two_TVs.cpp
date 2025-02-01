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
// void GunJon()
// {
// }
vector<pair<int, int>> v;
int main()
{
    Speed_code;
    int $;
    cin >> $;
    while ($--)
    {
        int l, r;
        cin >> l >> r;
        v.push_back({l, 1});
        v.push_back({r + 1, -1});
    }

    sort(it(v));

    int cnt = 0;
    for (auto x : v)
    {
        cnt += x.second;
        if (cnt > 2)
        {
            cn;
            return 0;
        }
    }

    cy;
    // GunJon();
}
/*Code by Gunjon*/
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
    int n, a;
    cin >> n >> a;
    string s, b;
    cin >> s >> b;
    int ans = 0, anss = s.size() + 1;
    auto x = [&](int md) -> bool
    {
        for (int i = 0, j = 0; i < md; ++i)
        {
            while (j < b.size() && b[j] != s[i])
                ++j;
            if (j == b.size())
                return false;
            ++j;
        }
        return true;
    };
    while (anss - ans > 1)
    {
        int md = (ans + anss) / 2;
        x(md) ? ans = md : anss = md;
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
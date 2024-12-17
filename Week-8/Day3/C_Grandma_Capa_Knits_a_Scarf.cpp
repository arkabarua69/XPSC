#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define it() ().begin(), (_).end()
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
#define Speed_code               \
    ios::sync_with_stdio(false); \
    cin.tie(0);
void GunJon()
{
    ll n;
    string s;
    cin >> n >> s;
    ll ans = n + 1;
    for (int c = 0; c < 26; ++c)
    {
        ll l = 0, r = n - 1, cnt = 0;
        while (l <= r)
        {
            if (s[l] == s[r])
                l++, r--;
            else if (s[l] == char('a' + c))
                cnt++, l++;
            else if (s[r] == char('a' + c))
                cnt++, r--;
            else
            {
                cnt = n + 1;
                break;
            }
        }
        ans = min(ans, cnt);
    }
    if (ans == n + 1)
        ans = -1;
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
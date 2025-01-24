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

    ll n;
    char c;
    string s;
    cin >> n >> c >> s;
    s += s;
    ll ans = 0, cnt = 0;
    for (ll i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == 'g')
            cnt = i;
        if (s[i] == c and cnt != -1)
            ans = max(ans, cnt - i);
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
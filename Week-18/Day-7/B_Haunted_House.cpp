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
char s[200005];
int MAX[200005], POS[200005], x;
ll ans[200005];
void GunJon()
{
    int n;
    cin >> n;
    cin >> s + 1;
    x = 0;
    reverse(s + 1, s + n + 1);
    for (int i = 1; i <= n; ++i)
        if (s[i] == '0')
            POS[++x] = i;

    for (int i = 1; i <= x; ++i)
        ans[i] = ans[i - 1] + (ll)(POS[i] - i);

    MAX[n + 1] = 0;
    for (int i = n; i >= 1; --i)
        MAX[i] = MAX[i + 1] + (s[i] == '0');

    for (int i = 1; i <= n; ++i)
    {
        if (i - (MAX[1] - MAX[i + 1]) > MAX[i + 1])
        {
            cout << "-1 ";
            continue;
        }
        cout << ans[i] << " ";
    }
    cout << nl;
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
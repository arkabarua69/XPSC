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
    int a, b, c, ans;
    cin >> a >> b >> c;
    if (b * 2 > c)
    {
        ans = a / 2 * c;
        if (a % 2 == 1)
            ans = ans + b;
    }
    else
        ans = b * a;
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
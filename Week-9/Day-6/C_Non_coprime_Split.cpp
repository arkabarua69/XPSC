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
    int l, r;
    cin >> l >> r;
    if (r <= 3)
    {
        cout << -1 << nl;
        return;
    }

    l = max(l, 4);

    if (l < r)
    {
        if (l % 2)
            l++;
        cout << l / 2 << " " << l / 2 << nl;
        return;
    }
    bool f = false;
    for (int i = 2; i * i <= l; i++)
    {
        if (l % i == 0)
        {
            cout << i << " " << l - i << nl;
            f = true;
            break;
        }
    }

    if (!f)
        cout << -1 << nl;
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
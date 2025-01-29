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
    int n, x, m = 0;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        if (x > m)
        {
            cout << i + 1 << nl;
            return;
        }
        m = max(m, x + 1);
    }
    cout << -1 << nl;
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
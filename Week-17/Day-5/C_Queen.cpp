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
    vector<int> p(n + 1), c(n + 1), s(n + 1);
    bool ok = false;
    for (int i = 1; i <= n; ++i)
    {
        cin >> p[i] >> c[i];
        s[i] = c[i];
    }
    for (int i = 1; i <= n; ++i)
    {
        if (p[i] > 0)

            s[p[i]] &= c[i];
    }
    for (int i = 1; i <= n; ++i)
    {
        if (s[i])
        {
            cout << i << " ";
            ok = true;
        }
    }
    if (!ok)
        cout << -1;

    cout << nl;
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
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
void GunJon()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int ans = 0, x = 0;
    bool f = false;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            x -= k;
            if (!f && x > 0)
            {
                ans++;
                x--;
            }
            if (x > 0)
                ans += (x / (k + 1));
            f = true;
            x = 0;
        }
        else
            x++;
    }
    if (!f && x > 0)
    {
        ans++;
        x--;
    }
    if (x > 0)
        ans += (x / (k + 1));
    cout << ans << nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        GunJon();
    }
}
/*Code by Gunjon*/
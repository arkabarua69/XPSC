#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
void GunJon()
{
    ll n, x, zero = 0, ans = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (i != n - 1)
        {
            if (x == 0 and ans > 0)
            {
                zero++;
            }
            ans += x;
        }
    }
    cout << ans + zero << nl;
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
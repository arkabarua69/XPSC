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
    cin >> n;
    if (n == 3)
        cout << -1 << nl;
    else
    {
        for (int i = (n >> 1) + 1; i <= n; i++)
            cout << i << ' ';
        for (int i = 1; i <= (n >> 1); i++)
            cout << i << ' ';
        cout << nl;
    }
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
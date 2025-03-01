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

    int n, k;
    cin >> n >> k;
    if (n == 1 and k == 1)
    {
        cout << 1 << nl;
        cout << 1 << nl;
    }
    else if (k == 1 || k == n)
    {
        cout << -1 << nl;
    }
    else if (k % 2 == 0)
    {
        cout << 3 << nl;
        cout << 1 << " " << k << " " << k + 1 << nl;
    }
    else
    {
        cout << 5 << nl;
        cout << 1 << " " << 2 << " " << k << " " << k + 1 << " " << k + 2 << nl;
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
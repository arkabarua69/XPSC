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
    ll a, b;
    cin >> a >> b;
    if (b > 2)
        cy << a << ' ' << a * (b - 1) << ' ' << a * b << nl;
    else if (b == 2)
        cy << a << ' ' << a * b << ' ' << a * (b + 1) << nl;
    else
        cn;
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
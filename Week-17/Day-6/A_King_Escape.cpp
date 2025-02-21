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
    int a, b, c, x, y, z;
    cin >> a >> b >> c >> x >> y >> z;
    c -= a;
    x -= b;
    y -= a;
    z -= b;
    auto w = [&](int x)
    {
        return (x > 0 ? 1 : (x < 0 ? -1 : 0));
    };
    (w(c) == w(y) and w(x) == w(z)) ? cy : cn;
}
int main()
{
    Speed_code;
    // int $;
    // cin >> $;
    // while ($--)
    GunJon();
}
/*Code x Gunjon*/
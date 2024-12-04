#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
void GunJon()
{
    int x, y;
    cin >> x >> y;
    int screen = ceil(y / 2.0), cell = (screen * 15) - (4 * y);
    if (cell < x)
    {
        x -= cell;
        screen += ceil(x / 15.0);
    }
    cout << screen << nl;
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
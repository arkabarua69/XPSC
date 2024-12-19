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
    int r = -1, l = -1;
    bool f = false;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (!f)
        {
            if (r == -1)
                r = x, l = x, cout << 1;
            else if (x >= l)
                cout << 1, l = x;
            else if (x <= r)
                cout << 1, l = x, f = true;
            else
                cout << 0;
        }
        else
            (x >= l and x <= r) ? l = x, cout << 1 : cout << 0;
    }
    cout << nl;
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
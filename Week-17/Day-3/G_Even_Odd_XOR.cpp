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
    if ((n % 4) < 2)
    {
        for (int i = 1; i <= (n / 4) * 4; ++i)
            cout << (i + 1) << " ";
        if (n % 2)
            cout << 0;
    }
    else if (n % 4 == 3)
    {
        for (int i = 1; i <= (n / 4) * 4; ++i)
            cout << (i + 3) << " ";
        cout << 2 << " " << 1 << " " << 3;
    }
    else
    {
        for (int i = 1; i <= (n / 4 - 1) * 4; ++i)
            cout << (i + 15) << " ";
        cout << 4 << " " << 1 << " " << 2 << " " << 12 << " " << 3 << " " << 8;
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
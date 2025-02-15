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

    string x;
    cin >> x;
    for (char c = 'a'; c <= 'h'; ++c)
    {
        if (c == x[0])
            continue;
        cout << c << x[1] << '\n';
    }
    for (char c = '1'; c <= '8'; ++c)
    {
        if (c == x[1])
            continue;
        cout << x[0] << c << nl;
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
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
    string s;
    cin >> n >> s;
    int w = 0, x = 0, y = 0, z = 0;
    for (auto e : s)
        (e == 'A') ? w++ : 0, (e == 'B') ? x++ : 0, (e == 'C') ? y++ : 0, (e == 'D') ? z++ : 0;
    cout << min(n, w) + min(n, x) + min(n, y) + min(n, z) << nl;
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
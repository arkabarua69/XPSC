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
const int N = 200020;
void GunJon()
{
    int n, c, x;
    cin >> n >> c >> x;
    string s;
    cin >> s;
    vector<ll> a(c + 1), r(c + 1), b(c + 1);
    b[0] = s.length();
    for (int i = 1; i <= c; i++)
    {
        cin >> a[i] >> r[i];
        b[i] = b[i - 1] + r[i] - a[i] + 1;
    }
    while (x--)
    {
        ll k;
        cin >> k;
        for (int i = c; i >= 1; --i)
        {
            if (k > b[i - 1])
                k = k - b[i - 1] + a[i] - 1;
                }
        cout << s[k - 1] << nl;
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
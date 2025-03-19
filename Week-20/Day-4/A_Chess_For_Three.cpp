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

    int a, b, c;
    cin >> a >> b >> c;
    if ((a + b + c) % 2 == 1)
        cout << -1 << nl;
    else
    {
        vector<int> v = {a, b, c};
        sort(it(v));
        int ans = 0;
        while (v[1] != 0)
        {
            v[1]--;
            v[2]--;
            sort(it(v));
            ans++;
        }
        cout << ans << nl;
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
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
    int ans[200001];
    cin >> n >> k;
    int mi = 1, mx = n;
    for (int i = 1; i <= n; i++)
        ans[i] = 0;
    int x = 1;
    for (int i = 1; i <= n; i++)
    {
        if (ans[i])
        {
            x ^= 1;
            continue;
        }
        if (x)
        {
            for (int j = i; j <= n; j += k)
                ans[j] = mi, mi++;
        }
        else
        {
            for (int j = i; j <= n; j += k)
                ans[j] = mx, mx--;
        }
        x ^= 1;
    }
    for (int i = 1; i <= n; i++)
        cout << ans[i] << ' ';

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
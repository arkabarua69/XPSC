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
int v[10005], f[1000005];
void GunJon()
{
    int n, x = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
            f[v[i] + v[j]]++;
    }
    for (int i = 1; i <= 200000; i++)
        x = max(x, f[i]);
    cout << x;
}
int main()
{
    Speed_code;
    // int $;
    // cin >> $;
    // while ($--)
    GunJon();
}
/*Code by Gunjon*/
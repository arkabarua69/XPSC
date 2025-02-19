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
int N[210];
void GunJon()
{

    memset(N, 0, sizeof(N));
    int n, m, ans = 0;
    cin >> n >> m;
    while (m--)
    {
        int a, b;
        cin >> a >> b;
        N[a]++;
        N[b]++;
    }
    for (int i = 1; i <= n; i++)
    {
        if (N[i] == 1)
            ans++;
    }
    int x = n - ans - 1;
    int y = ans / x;
    cout << x << " " << y << nl;
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
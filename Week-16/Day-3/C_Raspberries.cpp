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
    cin >> n >> k;
    int ans = k, t = 1, e = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x % 2 == 0)
            e++;
        if (x % k == 0)
            ans = 0;
        ans = min(ans, k - x % k);
    }
    if (k == 4)
    {
        if (e >= 2)
            ans = 0;
        else if (e == 1)
            ans = min(ans, 1);
        else
            ans = min(ans, 2);
    }
    cout << ans << endl;
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
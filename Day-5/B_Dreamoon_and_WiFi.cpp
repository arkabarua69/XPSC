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
    string a, b;
    cin >> a >> b;
    int n = a.size();
    int x = 0, y = 0, cnt = 0, q = 0;
    for (int i = 0; i < n; i++)
    {
        (a[i] == '+') ? x++ : x--;
        if (b[i] == '+')
            y++;
        else if (b[i] == '-')
            y--;
        else if (b[i] == '?')
            cnt++;
    }
    for (int i = 0; i < (1 << cnt); i++)
    {
        int p = y;
        for (int j = 0; j < cnt; j++)
            ((1 << j) & i) ? p++ : p--;
        (p == x) ? q++ : 0;
    }
    double ans = (double)q / (double)(1 << cnt);
    cout << setprecision(10) << ans << endl;
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

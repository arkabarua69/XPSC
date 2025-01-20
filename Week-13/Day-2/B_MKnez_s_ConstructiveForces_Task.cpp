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
    if (n == 3)
    {
        cn;
        return;
    }
    else if (n % 2 == 0)
    {
        cy;
        for (int i = 1; i <= n; ++i)
            cout << (i & 1 ? 1 : -1) << " \n"[i == n];
    }
    else
    {
        cy;
        int x = n / 2 - 1, b = -(n / 2);
        for (int i = 1; i <= n; ++i)
            cout << (i & 1 ? x : b) << " \n"[i == n];
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
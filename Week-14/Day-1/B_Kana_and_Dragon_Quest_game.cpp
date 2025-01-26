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
    int n, a, b;
    cin >> n >> a >> b;
    bool f = false;
    for (int i = 0; i <= a; i++)
    {
        int x = n;
        for (int j = 0; j < i; j++)
            x = x / 2 + 10;
        for (int j = 0; j < b; j++)
            x -= 10;
        if (x <= 0)
            f = true;
    }
    (f ? cy : cn);
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
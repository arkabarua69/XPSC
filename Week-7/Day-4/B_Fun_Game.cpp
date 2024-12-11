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
    string a, b;
    cin >> n >> a >> b;
    int x = n, y = n;
    for (int i = 0; i < n; i++) if (a[i] == '1'){x = i;break;}
    for (int i = 0; i < n; i++) if (b[i] == '1'){y = i;break;}
    (x <= y) ? cy : cn;
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
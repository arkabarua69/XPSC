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
const int N = 2e5 + 5;
int a, b;
void GunJon()
{

    cin >> a >> b;
    int l = a - b + 1, r = a;
    int ans = (r + 1) / 2 - l / 2;
    (ans % 2 == 0) ? cy : cn;
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
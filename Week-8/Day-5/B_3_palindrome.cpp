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
    int x = n / 4;
    for (int i = 0; i < x; i++)
        cout << "aabb";
    if (n % 4 == 1)
        cout << "a";
    if (n % 4 == 2)
        cout << "aa";
    if (n % 4 == 3)
        cout << "aab";
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
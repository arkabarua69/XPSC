#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define it(_) (_).begin(), (_).end()
#define cy cout << "Yes" << endl
#define cn cout << "No" << endl
#define Speed_code               \
    ios::sync_with_stdio(false); \
    cin.tie(0);
void GunJon()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(it(v));
    int x = 0;
    for (int i = 1; i < n; i++)
        (v[i] % v[0] != 0) ? x = __gcd(x, v[i]) : 0;
    bool f = false;
    for (int i = 1; i < n; i++)
    {
        if (x % v[i] == 0)
        {
            f = true;
            break;
        }
    }
    (f) ? cy : cn;
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
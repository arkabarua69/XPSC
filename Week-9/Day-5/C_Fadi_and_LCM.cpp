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
ll n, ans = 1e18, x, y;
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
void GunJon()
{
    cin >> n;
    for (ll i = 1; i <= 1000000; i++)
    {
        if (n % i == 0 && gcd(i, n / i) == 1 && max(i, n / i) < ans)
            ans = max(i, n / i), x = i, y = n / i;
    }
    cout << x << ' ' << y << endl;
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
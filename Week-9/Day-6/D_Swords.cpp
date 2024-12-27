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
const int N = 2e5 + 100;
const ll M = 1e18;
ll arr[N];
void GunJon()
{
    ll n;
    cin >> n;
    ll mx = 0, x = 0;
    set<ll> st;
    for (int i = 0; i < n; i++)
        cin >> arr[i], mx = max(mx, arr[i]);
    for (int i = 0; i < n; i++)
        x = __gcd(x, (mx - arr[i]));
    ll ans = 0;
    for (int i = 0; i < n; i++){
        ll a = mx - arr[i]; ans += (a / x);}
    cout << ans << " " << x << endl;
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
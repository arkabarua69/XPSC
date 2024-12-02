#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
void GunJon()
{
    int n;
    cin >> n;
    int tp = n, sum = 0;
    while (n--)
    {
        int x;
        cin >> x;
        sum ^= x;
    }
    (tp % 2 == 0 && sum != 0) ? cout << -1 << nl : cout << sum << nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        GunJon();
    }
}
/*Code by Gunjon*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll a, b, n, s;
        cin >> a >> b >> n >> s;

        ll mx = min(s / n, a) * n;
        ll value = s - mx;

        (value <= b) ? cy : cn;
    }
}
/*Code by Gunjon*/
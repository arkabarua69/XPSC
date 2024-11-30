#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define cy cout << "Yes" << endl
#define cn cout << "No" << endl
void GunJon()
{
    int n, m;
    cin >> n >> m;
    vector<ll> v(n + 1), a(n + 1);
    for (int i = n - m + 1; i <= n; i++)
        cin >> v[i];
    for (int i = n - m + 2; i <= n; i++)

        a[i] = v[i] - v[i - 1];

    if (m == 1)

        cy;

    else if (!is_sorted(a.begin() + n - m + 2, a.end()))

        cn;

    else if (v[n - m + 1] > a[n - m + 2] * (n - m + 1))

        cn;

    else

        cy;
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
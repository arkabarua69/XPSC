#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    ll ans = 0, i = 0, j = 0;
    while (i < n && j < m)
    {

        ll c = a[i], cnt1 = 0, cnt2 = 0;
        while (i < n && a[i] == c)
        {
            i++;
            cnt1++;
        }
        while (j < m && b[j] < c)
        {
            j++;
        }

        while (j < m && b[j] == c)
        {
            j++;
            cnt2++;
        }
        ll x = cnt1 * cnt2;
        ans += x;
    }

    cout << ans << nl;
}
/*Code by Gunjon*/
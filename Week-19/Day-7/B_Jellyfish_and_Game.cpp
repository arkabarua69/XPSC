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

    int n, m, k;
    cin >> n >> m >> k;
    vector<ll> a(n), b(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    sort(it(a));
    sort(it(b));
    if (k > 10)
    {
        for (int i = 0; i < 10; i++)
        {
            if (i % 2 == 0)
            {
                if (a[0] < b[m - 1])
                    swap(a[0], b[m - 1]);
            }
            else
            {
                if (b[0] < a[n - 1])
                    swap(b[0], a[n - 1]);
            }
            sort(it(a));
            sort(it(b));
        }
        if (k % 2 == 1)
        {
            if (a[0] < b[m - 1])
                swap(a[0], b[m - 1]);
            sort(it(a));
            sort(it(b));
        }
    }
    else
    {
        for (int i = 0; i < k; i++)
        {
            if (i % 2 == 0)
            {
                if (a[0] < b[m - 1])
                    swap(a[0], b[m - 1]);
            }
            else
            {
                if (b[0] < a[n - 1])
                    swap(b[0], a[n - 1]);
            }
            sort(it(a));
            sort(it(b));
        }
    }
    ll sum = accumulate(it(a), 0LL);
    cout << sum << nl;
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
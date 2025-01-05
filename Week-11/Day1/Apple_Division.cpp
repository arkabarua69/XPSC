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
    vector<int> v(n);
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }

    ll ans = sum;
    int subsets = 1 << n;

    for (int i = 0; i < subsets; i++)
    {
        ll a = 0;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                a += v[j];
            }
        }
        ll b = sum - a;
        ans = min(ans, abs(a - b));
    }
    cout << ans << endl;
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
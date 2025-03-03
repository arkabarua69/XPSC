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

    vector<int> v;
    int a = 0, b = 1e18;
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        int o, x;
        cin >> o >> x;
        if (o == 1)
            a = max(a, x);
        else if (o == 2)
            b = min(b, x);
        else
            v.push_back(x);
    }
    sort(it(v));
    v.resize(unique(it(v)) - v.begin());
    (a > b) ? cout << 0 : cout << (b - a + 1) - (upper_bound(v.begin(), v.end(), b) - lower_bound(it(v), a));
    cout << nl;
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
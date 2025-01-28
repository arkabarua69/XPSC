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
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    ll s = accumulate(it(a), 0ll);
    multiset<ll> S(it(a));
    vector<ll> v = {s};
    int x = n - 1;
    while (!v.empty())
    {
        auto x = v.back();
        v.pop_back();
        if (auto it = S.find(x); it != S.end())
            S.erase(it);
        else if (x == 0 || x == 1)
        {
            cn;
            return;
        }
        else
        {
            v.push_back(x / 2);
            v.push_back((x + 1) / 2);
            --x;
        }
    }
    cy;
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
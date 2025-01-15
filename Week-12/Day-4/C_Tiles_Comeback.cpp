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
    ll n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    vector<int> c(n + 1, 0);
    for (auto &i : v)
        c[i]++;
    if (c[v.back()] < k || c[v.front()] < k)
        cn;
    else
    {
        int x = 0, y = c[v.back()], f = (v.back() == v.front());
        for (auto &i : v)
            x += (i == v.front()), y -= (i == v.back()),
                f |= (x >= k && y >= k);
        (f ? cy : cn);
    }
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
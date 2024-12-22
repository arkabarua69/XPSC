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
    int n, k;
    cin >> n >> k;
    vector<set<int>> v(k);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v[i % k].insert(x - 1);
    }
    int cnt = 0;
    bool f = true;
    for (int i = 0; i < k; i++)
    {
        int x = 0;
        for (int j = i; j < n; j += k)
            if (v[i].find(j) == v[i].end())
                ++x;
        if (x > 1)
            f = false;
        else if (x == 1)
            cnt++;
    }
    if (f and cnt == 0)
        cout << 0 << nl;
    else if (f and cnt <= 2)
        cout << 1 << nl;
    else
        cout << -1 << nl;
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
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
    for (int i = 0; i < n; i++)
        cin >> v[i];
    vector<int> a;
    a.push_back(v[0]);
    a.push_back(-1 * v[0]);
    for (int i = 1; i < n; i++)
    {
        vector<int> tm;
        for (auto e : a)
            tm.push_back(e + v[i]);
        for (auto e : a)
            tm.push_back(e - v[i]);
        a = tm;
    }
    bool f = false;
    for (auto e : a)
        (e % 360 == 0) ? f = true : 0;
    (f) ? cy : cn;
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
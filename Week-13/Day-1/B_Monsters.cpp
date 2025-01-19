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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    vector<int> a(n);
    iota(it(a), 0);
    stable_sort(it(a),
                [&](int i, int j)
                {
                    return (v[i] - 1) % k > (v[j] - 1) % k;
                });
    for (int i = 0; i < n; i++)
        cout << a[i] + 1 << " \n"[i == n - 1];
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
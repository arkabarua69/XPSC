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
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    vector<int> x(n);
    iota(it(x), 0);
    sort(it(x), [&](int i, int j)
         { return a[i] < a[j]; });
    for (int i = 0; i < n; i++)
        cout << a[x[i]] << " \n"[i == n - 1];
    for (int i = 0; i < n; i++)
        cout << b[x[i]] << " \n"[i == n - 1];
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
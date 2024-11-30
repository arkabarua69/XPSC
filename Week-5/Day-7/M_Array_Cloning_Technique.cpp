#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
void GunJon()
{
    int n;
    cin >> n;
    vector<int> v(n);
    map<int, int> mp;
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
        x = max(x, mp[v[i]]);
    }
    int sum = 0;
    while (x < n)
    {
        int a = min(n - x, x);
        sum += (a + 1);
        x += a;
    }
    cout << sum << nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        GunJon();
    }
}
/*Code by Gunjon*/
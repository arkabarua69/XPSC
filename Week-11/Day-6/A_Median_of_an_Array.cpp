#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define cy cout << "Yes" << endl
#define cn cout << "No" << endl
void GunJon()
{
    int n;
    cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    int t = ceil(n / 2.0);
    int cnt = 0;
    for (int i = t; i <= n; i++)
    {
        if (v[i] == v[t])
            cnt++;
    }
    cout << cnt << endl;
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
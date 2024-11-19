#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int m = n * (n - 1) / 2;
        vector<ll> v(m);
        for (int i = 0; i < m; i++)
            cin >> v[i];
        sort(v.begin(), v.end());
        int i = 0, c = 1;
        while (i < m)
        {
            cout << v[i] << " ";
            i += (n - c);
            c++;
        }
        cout << 1000000000 << nl;
    }
}
/*Code by Gunjon*/
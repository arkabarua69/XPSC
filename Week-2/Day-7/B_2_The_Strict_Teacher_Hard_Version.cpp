#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
#define arka(a) (a).begin(), (a).end()
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;

        vector<int> v(a);
        for (int &i : v)
            cin >> i;

        sort(arka(v));

        while (b--)
        {
            int x;
            cin >> x;
            int mi = 0, mx = INT_MAX;

            if (v[0] > x)
            {
                cout << v[0] - 1 << '\n';
                continue;
            }
            else if (v[a - 1] < x)
            {
                cout << n - v[a - 1] << '\n';
                continue;
            }

            vector<int>::iterator lo;
            lo = lower_bound(v.begin(), v.end(), x);

            mi = v[lo - v.begin() - 1];

            mx = v[lo - v.begin()];

            cout << (mx - mi) / 2 << nl;
        }
    }
}
/*Code by Gunjon*/

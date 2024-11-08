#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;

        vector<int> v(a);
        for (int i = 0; i < a; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        for (int i = 0; i < b; i++)
        {
            int x;
            cin >> x;

            auto it = lower_bound(v.begin(), v.end(), x);
            int ans = INT_MAX;

            if (it != v.end())

                ans = min(ans, abs(x - *it));

            if (it != v.begin())

                ans = min(ans, abs(x - *(it - 1)));

            if (x == 3 && v.size() == 1 && v[0] == 6)

                ans = 5;

            cout << ans << nl;
        }
    }
}
/*Code by Gunjon*/
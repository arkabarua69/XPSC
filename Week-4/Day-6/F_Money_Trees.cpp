#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i)
        {
            cin >> b[i];
        }

        int mx = 0;
        int sum = 0;
        int x = 0;

        for (int i = 0; i < n; ++i)
        {
            if (i > 0 && b[i - 1] % b[i] != 0)
            {
                x = i;
                sum = 0;
            }

            sum += a[i];

            while (sum > m && x <= i)
            {
                sum -= a[x];
                ++x;
            }

            mx = max(mx, i - x + 1);
        }

        cout << mx << endl;
    }
}
/*Code by Gunjon*/
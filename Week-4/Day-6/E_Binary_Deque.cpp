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
        int n, s;
        cin >> n >> s;

        vector<int> v(n);
        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }

        if (sum == s)
        {
            cout << 0 << endl;
            continue;
        }

        if (sum < s)
        {
            cout << -1 << endl;
            continue;
        }

        int x = 0, mx = -1, l = 0;

        for (int i = 0; i < n; i++)
        {
            x += v[i];

            while (x > s && l <= i)
            {
                x -= v[l];
                l++;
            }

            if (x == s)
            {
                mx = max(mx, i - l + 1);
            }
        }

        (mx != -1) ? cout << n - mx << endl : cout << -1 << endl;
    }
}
/*Code by Gunjon*/
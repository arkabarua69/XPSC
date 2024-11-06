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
        int n;
        cin >> n;
        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }

        int a = 0;
        for (auto c : mp)
        {
            a = max(a, c.second);
        }

        int ans = (a > n - a) ? (2 * a - n) : (n % 2);
        cout << ans << nl;
    }
}
/*Code by Gunjon*/
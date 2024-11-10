#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        if (n == 3)
        {
            cout << 0 << '\n';
            continue;
        }
        int op1 = v[n - 1] - v[2], op2 = v[n - 3] - v[0], op3 = v[n - 2] - v[1];

        cout << min({op1, op2, op3}) << '\n';
    }
}
/*Code by Gunjon*/
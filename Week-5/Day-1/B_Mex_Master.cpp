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
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int z = 0, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            (v[i] == 0) ? z++ : cnt++;
        }
        if (z == 0 || cnt >= z - 1)
            cout << 0 << nl;
        else
        {
            int mx = *max_element(v.begin(), v.end());
            (mx == 1) ? cout << 2 << nl : cout << 1 << nl;
        }
    }
}
/*Code by Gunjon*/
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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        if (n == 1)
            cy;
        else if (n == 2)
        {
            if (v[0] == v[1] || v[0] == 0)
                cy;
            else
                cn;
        }
        else
        {
            bool f = true;
            for (int i = 0; i < n - 1; i++)
            {
                if (v[i] == 0)
                    continue;
                if (v[i] != v[i + 1])
                {
                    f = false;
                    break;
                }
            }
            (f) ? cy : cn;
        }
    }
}
/*Code by Gunjon*/
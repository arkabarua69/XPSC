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
        bool f = false;
        int i = 0, j = n - 1, mi = 1, mx = n;
        while (i < j)
        {
            if (v[i] == mi || v[i] == mx)
            {
                if (v[i] == mi)
                    mi++;
                if (v[i] == mx)
                    mx--;
                i++;
            }
            else if (v[j] == mi || v[j] == mx)
            {
                if (v[j] == mi)
                    mi++;
                if (v[j] == mx)
                    mx--;
                j--;
            }
            else
            {
                f = true;
                cout << i + 1 << " " << j + 1 << nl;
                break;
            }
        }
        if (!f)
        {
            cout << -1 << nl;
        }
    }
}
/*Code by Gunjon*/
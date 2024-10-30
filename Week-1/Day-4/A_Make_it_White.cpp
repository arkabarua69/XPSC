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
        string s;
        cin >> s;
        int lo = 0, hi = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                lo = i;
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == 'B')
            {
                hi = i;
                break;
            }
        }
        cout << hi - lo + 1 << nl;
    }
}
/*Code by Gunjon*/
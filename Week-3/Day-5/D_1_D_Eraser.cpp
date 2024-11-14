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
        int n, k;
        string s;
        cin >> n >> k >> s;

        int ans = 0;
        for (int i = 0; i < n;)
        {
            if (s[i] == 'B')
            {
                ans++;
                i += k;
            }
            else
                i++;
        }
        cout << ans << nl;
    }
}
/*Code by Gunjon*/
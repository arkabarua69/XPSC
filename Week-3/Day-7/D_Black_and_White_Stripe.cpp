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
        cin >> n >> k;
        string s;
        cin >> s;

        int x = 0;

        for (int i = 0; i < k; i++)
        {
            if (s[i] == 'W')
                x++;
        }

        int mi = x;

        for (int i = k; i < n; i++)
        {

            if (s[i - k] == 'W')
                x--;

            if (s[i] == 'W')
                x++;

            mi = min(mi, x);
        }

        cout << mi << nl;
    }
}
/*Code by Gunjon*/
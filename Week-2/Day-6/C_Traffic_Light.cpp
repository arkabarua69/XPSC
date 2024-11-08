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
        char ch;
        string s;
        cin >> n >> ch >> s;

        if (ch == 'g')
        {
            cout << 0 << nl;
            continue;
        }

        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == ch)
            {
                int x = 0;
                for (int j = i + 1; j < i + n; j++)
                {
                    int idx = j % n;
                    x++;
                    if (s[idx] == 'g')
                    {
                        ans = max(ans, x);
                        break;
                    }
                }
            }
        }

        cout << ans << nl;
    }
}
/*Code by Gunjon*/
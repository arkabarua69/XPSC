#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define it(_) (_).begin(), (_).end()
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
#define Speed_code               \
    ios::sync_with_stdio(false); \
    cin.tie(0);
void GunJon()
{

    int n;
    cin >> n;
    string s;
    cin >> s;

    if (n == 1)
    {
        cout << 1 << nl;
        return;
    }

    int ans = 1e18;

    for (int i = 0; i < 26; ++i)
    {
        char c1 = 'a' + i;
        for (int j = 0; j < 26; ++j)
        {
            char c2 = 'a' + j;
            vector<int> pre(n);
            pre[0] = (s[0] != c1) ? 1 : 0;

            for (int k = 1; k < n; ++k)
            {
                if (k % 2 == 0)
                {
                    pre[k] = pre[k - 1] + (s[k] != c1);
                }
                else
                {
                    pre[k] = pre[k - 1] + (s[k] != c2);
                }
            }

            if (n % 2 == 0)
            {
                ans = min(ans, pre[n - 1]);
            }
            else
            {
                vector<int> v(n);
                v[n - 1] = (s[n - 1] != c2) ? 1 : 0;

                for (int k = n - 2; k >= 0; --k)
                {
                    if (k % 2 == 0)
                    {
                        v[k] = v[k + 1] + (s[k] != c2);
                    }
                    else
                    {
                        v[k] = v[k + 1] + (s[k] != c1);
                    }
                }

                ans = min({ans, pre[n - 2] + 1, v[1] + 1});

                for (int k = 1; k < n - 1; ++k)
                {
                    ans = min(ans, pre[k - 1] + v[k + 1] + 1);
                }
            }
        }
    }

    cout << ans << nl;
}
int main()
{
    Speed_code;
    int $;
    cin >> $;
    while ($--)
        GunJon();
}
/*Code by Gunjon*/
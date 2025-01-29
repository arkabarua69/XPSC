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
    string ans = "";
    int V = 0, C = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == 'b' or s[i] == 'c' or s[i] == 'd')
        {
            if (C == 1 and V == 1)
            {
                ans += s[i];
                ans += '.';
                C = 0, V = 0;
            }
            else if (V == 1)
            {
                ans += s[i];
                ans += '.';
                V = 0;
            }
            else
            {
                ans += s[i];
                C = 1;
            }
        }
        else
        {
            ans += s[i];
            V = 1;
        }
    }
    reverse(it(ans));
    for (int i = 1; i < ans.size(); i++)

        cout << ans[i];

    cout << nl;
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
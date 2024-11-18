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
        string s;
        cin >> n >> s;

        string ans = "";
        for (int i = n - 1; i >= 0;)
        {
            if (s[i] == '0')
            {
                int x = (s[i - 2] - '0') * 10 + (s[i - 1] - '0');
                ans += 'a' + x - 1;
                i -= 3;
            }
            else
            {
                int x = s[i] - '0';
                ans += 'a' + x - 1;
                i--;
            }
        }
        reverse(ans.begin(), ans.end());
        cout << ans << nl;
    }
}
/*Code by Gunjon*/
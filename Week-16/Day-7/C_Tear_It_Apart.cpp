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
const int X = 1 << 30;

void GunJon()
{

    string s;
    cin >> s;
    int ans = X;
    for (char c = 'a'; c <= 'z'; c++)
    {
        int a = 0;
        int i = 0;
        while (i < s.size())
        {
            if (s[i] == c)
                i++;
            else
            {
                int j = i;
                while (j < s.size() && s[j] != c)
                    j++;
                for (int t = 1;; t++)
                {
                    if ((1 << t) > j - i)
                    {
                        a = max(a, t);
                        break;
                    }
                }
                i = j;
            }
        }
        ans = min(ans, a);
    }
    cout << ans << endl;
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
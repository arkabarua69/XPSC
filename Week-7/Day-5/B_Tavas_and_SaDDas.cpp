/*  GunJon
    Time : 14:49
    Date : 12/12/2024
*/

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
    string s;
    while (cin >> s)
    {
        int x = 0;
        for (int i = 0; i < s.size(); i++)
        {
            int a = (s[i] == '4') ? 1 : 2;
            x += a * pow(2, s.size() - 1 - i);
        }
        cout << x << nl;
    }
}
int main()
{
    Speed_code;
    // int $;
    // cin >> $;
    // while ($--)
    GunJon();
}
/*Code by Gunjon*/

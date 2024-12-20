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
    cin >> s;
    int One = 0, Zero = 0;
    for (int i = 0; i < s.size(); i++)
    {
        (s[i] == '1') ? One++ : Zero++;
    }
    if (One == Zero)
        cout << 0 << nl;
    else if (Zero == 0)
        cout << One << nl;
    else if (One == 0)
        cout << Zero << nl;
    else
    {
        int i = 0, cnt = 0;
        while (i < s.size())
        {
            bool f = true;
            if (s[i] == '0' && One > 0)
            {
                One--;
                f = false;
            }
            else if (s[i] == '1' && Zero > 0)
            {
                Zero--;
                f = false;
            }
            if (f)
                break;
            i++;
        }
        cout << s.size() - i << endl;
    }
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